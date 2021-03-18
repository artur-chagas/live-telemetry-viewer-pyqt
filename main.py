#region python imports
import sys
import signal
#endregion

#region qt imports
from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
from PyQt5.QtQml import QQmlApplicationEngine
from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot
#endregion

#region py-backend imports
import beacon as beacon
#endregion

#region other imports
import serial
#endregion

class App():
    def __init__(self):
        self.app = QGuiApplication(sys.argv)
        
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

class Bridge(QObject):
    def __init__(self, app, engine):
        QObject.__init__(self)
        self.app = app
        self.engine = engine
        
    #region header
    @pyqtSlot(int)
    def updateHeaderBold(self, i:int):
        print("button"+str(i))
        button = QQmlComponent(self.engine).findChild(QObject, "button"+str(i))
    #endregion

if __name__ == "__main__":
    b = beacon.Functions()

    try:
        #responder a KeyboardInterrupt
        signal.signal(signal.SIGINT, signal.SIG_DFL)
        ser = serial.Serial("COM5", 9600)
        #cada string de lap enviada tem 22bytes 
        s = ser.read(17)
        print(s)
    except serial.SerialException:
        print("couldn't read")

    sys.exit(App())
