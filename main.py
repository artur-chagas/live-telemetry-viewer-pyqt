"""# **Live Telemetry Viewer**
    ## Introdução ao programa
    O LTV é a principal integração entre os sinais transmitidos, em tempo real
    pelo transmissor (hoje LoRa, antigamente, XBee) do carro atual e um computador,
    rodando Windows.
    A versão a que se refere essa documentação é desenvolvida em Python, com interface de usuário
    em Qt (PyQt5 + QML) e com alguns módulos de backend.
    A escolha pela linguagem e o framework de desenvolvimento se devem à facilidade
    de desenvolvimento, a abudância de módulos e ao pouco espaço em disco e poder de processamento
    necessários para gerar o programa final executável ```.exe```.
    
    ## Dependências
    O usuário final não necessita instalar nada, apenas executar o arquivo '''.exe'''.

    O desenvolvedor deve instalar **Python >=3.9**, e em seguida,
    rodar
    ```
    pip install PyQt5 Nuitka pyserial dill pathos pdoc3
    ```

    * **PyQt5**: proporciona interface de usuário, desenvolvida em QtQuick/QML
    * **Nuitka**: compila o código fonte ```.py``` em um executável nativo ```.exe``` ou ```.bin``` (Linux).
    Isso facilita a vida do usuário final e produz um código com excelente perfomance, por utilizar
    a correlação entre os objetos do Python e a sua implementação original em C
    * **pyserial**: permite o facil acesso à porta serial
    * **dill**: dependência de pathos, serialização eficiente de objectos
    * **pathos**: melhora o processamento paralelo do Python (modulo *multiprocessing*), pois este usa
    *pickle*, incapaz de serializar o *QObject* (Bridge)[#main.Bridge], usado em (SerialProcess)[#main.SerialProcess]
    * **pdoc3**: proporciona a documentação que você está lendo neste momento

    ## Como documentar
    Recomenda-se documentar o projeto logo antes de submeter um release de uma versão nova,
    por meio de comentários nos arquivos .py e pelo uso do módulo pdoc.
"""



#region Python Imports
import sys
import signal
import threading
#endregion

#region qt imports
from PyQt5 import QtGui, QtQml, QtCore
# from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
# from PyQt5.QtQml import QQmlApplicationEngine
# from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot, pyqtProperty
#endregion

#region py-backend imports
import beacon as beacon
#endregion

#region other imports
import serial
import serial.tools.list_ports
# import pathos.helpers
import atexit
#endregion

class SerialProcess():

    def __init__(self):
        self.ser = serial.Serial()
        self.ser.timeout = 1
        self.thr = threading.Thread()
        self.thr.stop_condition = False

    def startSerial(self, serial_port, baudrate):
        self.ser.port = serial_port
        self.ser.baudrate = baudrate
        self.ser.open()
        if self.ser.is_open:
            self.thr.stop_condition = False
            self.thr.target = self.loopRead
            self.thr.daemon = True
            self.thr.start()

    def loopRead(self, ):
        self.data_stream = property("text")
        while(self.ser.is_open and not self.thr.stop_condition):
            self.data_stream = self.ser.readlines(40)
            if data_stream
                print(self.data_stream)
                self.ser.reset_input_buffer()
                self.data_stream.setpr

    def closeSerial(self):
        if self.thr.is_alive:
            self.thr.stop_condition = True
        if self.ser.is_open:
            self.ser.close()

class Bridge(QtCore.QObject):
    def __init__(self, app, engine):
        QtCore.QObject.__init__(self)
        self.app = app
        self.engine = engine
        self._serialString = ""
        self.p = SerialProcess()

    setComboBoxModel = QtCore.pyqtSignal(list)
    setConsoleText = QtCore.pyqtSignal(str, arguments=['text'])

    @QtCore.pyqtSlot()
    def getSerialPorts(self):
        list = []
        try:
            for t in serial.tools.list_ports.comports():
                list += [t.device]
        except:
            list = []
        self.setComboBoxModel.emit(list)

    @QtCore.pyqtSlot(str)
    def connectSerial(self, port:str):
        try:
            self.p.startSerial(port, 115200)
        except serial.PortNotOpenError:
            print("Port isn't open")
        except serial.SerialTimeoutException:
            print("Exceeded timeout")
        except serial.SerialException:
            print("Couldn't connect")
        except KeyboardInterrupt:
            print("KeyboardInterrupt")
        else:
            print("Connected")

    @QtCore.pyqtSlot()
    def disconnectSerial(self):
        self.p.closeSerial()

    @QtCore.pyqtSlot()
    def getSerialString(self):
        self.setConsoleText.emit(self._serialString)
        
class App():
    def __init__(self):
        self.app = QtGui.QGuiApplication(sys.argv + ['--style', 'material'])
        
        fontdatabase = QtGui.QFontDatabase()
        fontdatabase.addApplicationFont("fonts/Exo2-Regular.ttf")
        exo = QtGui.QFont("Exo 2",15)
        self.app.setFont(exo)

        self.engine = QtQml.QQmlApplicationEngine()
        self.bridge_receptor = Bridge(self.app, self.engine)
        self.bridge_beacon = Bridge(self.app, self.engine)

        #responder a KeyboardInterrupt
        signal.signal(signal.SIGINT, signal.SIG_DFL)

        self.engine.load("assets/main.qml")
        if not self.engine.rootContext():
            return -1
        self.engine.rootContext().setContextProperty("bridge_receptor", self.bridge_receptor)
        self.engine.rootContext().setContextProperty("bridge_beacon", self.bridge_beacon)
        
        self.engine.quit.connect(self.app.quit)
        self.app.exec()


if __name__ == "__main__":
    b = beacon.Functions()
    LTV_Application = App()
    sys.exit(LTV_Application)
