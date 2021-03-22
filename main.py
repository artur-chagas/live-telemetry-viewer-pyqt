#region python imports
import sys
import signal
#endregion

#region qt imports
from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
from PyQt5.QtQml import QQmlApplicationEngine
from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot, pyqtProperty
#endregion

#region py-backend imports
import beacon as beacon
#endregion

#region other imports
import serial
import serial.tools.list_ports
from multiprocessing import Process
import atexit
#endregion

class SerialProcess(Process):
    def __init__(self, serial_port:str, baudrate=9600, timeout=3600):
        super(SerialProcess, self).__init__(target=self.startSerial, args=(serial_port, baudrate, timeout))
        print('SerialProcess.__init__()')

    def startSerial(self, serial_port, baudrate, timeout):
        self.ser = serial.Serial(serial_port, baudrate=baudrate, timeout=timeout)
        self.loopRead()
        self.closeSerial()

    def loopRead(self, ):
        self.ser.read(17)
        while(self.ser.is_open):
            s = self.ser.readline()
            print(s)

    def closeSerial(self):
        if self.ser.is_open:
            self.ser.close()


class Bridge(QObject):
    def __init__(self, app, engine):
        QObject.__init__(self)
        self.app = app
        self.engine = engine
        self._serialString = ""

    setComboBoxModel = pyqtSignal(list)
    setConsoleText = pyqtSignal(str, arguments=['text'])

    @pyqtSlot()
    def getSerialPorts(self):
        list = []
        try:
            for t in serial.tools.list_ports.comports():
                list += [t.device]
        except:
            list = []
        self.setComboBoxModel.emit(list)
        # if len(serial.tools.list_ports) != 0:
        #     self.setComboBoxModel.emit(serial.tools.list_ports)

    @pyqtSlot(str)
    def connectSerial(self, port:str):
        self.p = SerialProcess(port)
        try:
            self.p.start()
            self.engine.rootContext().setContextProperty("serialProcess", self.p)
        except serial.SerialException:
            print("couldn't connect")
        except KeyboardInterrupt:
            print("KeyboardInterrupt")

    @pyqtSlot()
    def disconnectSerial(self):
        self.p.terminate()
        print("Process terminated")

    @pyqtSlot()
    def getSerialString(self):
        self.setConsoleText.emit(self._serialString)
        
class App():
    def __init__(self):
        self.app = QGuiApplication(sys.argv + ['--style', 'material'])
        
        fontdatabase = QFontDatabase()
        fontdatabase.addApplicationFont("fonts/Exo2-Regular.ttf")
        exo = QFont("Exo 2",15)
        self.app.setFont(exo)

        self.engine = QQmlApplicationEngine()
        self.bridge = Bridge(self.app,self.engine)

        #responder a KeyboardInterrupt
        signal.signal(signal.SIGINT, signal.SIG_DFL)
        self.engine.rootContext().setContextProperty("bridge", self.bridge)
        self.engine.load("assets/main.qml")
        
        self.engine.quit.connect(self.app.quit)
        self.app.exec()

def ex(a):
    if a.bridge.p.is_alive:
        a.bridge.p.kill()

if __name__ == "__main__":
    b = beacon.Functions()
    a = App()
    atexit.register(ex(a))
    sys.exit(a)
