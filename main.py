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
    * **pyserial**: possibilita o acesso às portas serial de forma independente da plataforma
    * **Nuitka**: compila o código fonte ```.py``` em um executável nativo ```.exe``` ou ```.bin``` (Linux).
    Isso facilita a vida do usuário final e produz um código com excelente perfomance, por utilizar
    a correlação entre os objetos do Python e a sua implementação original em C (CPython)
    * **pdoc3**: proporciona a documentação que você está lendo neste momento

    ## Como documentar
    Recomenda-se documentar o projeto logo antes de submeter um release de uma versão nova,
    por meio de comentários nos arquivos .py e pelo uso do módulo pdoc.
"""



#region Python Imports
import sys
import time
import signal
import threading
#endregion

#region qt imports
from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
from PyQt5.QtQml import QQmlApplicationEngine
from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot, pyqtProperty
#endregion

#region py-backend imports
import beacon as beacon
from formulaThread import *
import csvInterpreter as csvInterpreter
#endregion

#region other imports
import serial
import serial.tools.list_ports
#endregion


class Bridge(QObject):
    def __init__(self, app, engine):
        QObject.__init__(self)
        self.app = app
        self.engine = engine
        self._serialString = ""
        self.t = SerialThread(self)

    callSuccessDialog = pyqtSignal(str) 
    callExceptionDialog = pyqtSignal(str)
    # callComponentCreation = pyqtSignal(list)
    callComponentCreation = pyqtSignal("QVariant")
    setComboBoxModel = pyqtSignal(list)
    setConsoleText = pyqtSignal(str, arguments=['text'])

    # def createComponent(self, index:int, component:str, title:str):
        # self.callComponentCreation.emit([index, component, title])

    @pyqtSlot(result="QVariant")
    def createComponent(self, params:dict):
        self.callComponentCreation.emit(params)
        


    @pyqtSlot()
    def getSerialPorts(self):
        list = []
        try:
            for t in serial.tools.list_ports.comports():
                list += [str(t)]
        except:
            list = []
        self.setComboBoxModel.emit(list)

    @pyqtSlot(str)
    def connectSerial(self, portDevice:str):
        try:
            port = portDevice.split()[0]
            self.t.startSerial(self, port, 115200)
        except Exception as e:
            print(e)
            self.callExceptionDialog.emit(str(e))
        else:
            print("Connected")
            self.callSuccessDialog.emit("Conectado com sucesso")

    @pyqtSlot()
    def disconnectSerial(self):
        if self.t.ser.is_open:
            self.t.closeSerial()
            self.callSuccessDialog.emit("Desconectado com sucesso")

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
        self.bridge = Bridge(self.app, self.engine)

        #responder a KeyboardInterrupt
        signal.signal(signal.SIGINT, signal.SIG_DFL)

        self.engine.rootContext().setContextProperty("bridge", self.bridge)
        self.engine.load("assets/main.qml")

        listDicts = csvInterpreter.readCSV("components.csv")
        for d in listDicts:
            self.bridge.createComponent(d)
        self.engine.quit.connect(self.app.quit)
        self.app.exec()


if __name__ == "__main__":
    b = beacon.Functions()
    LTV_Application = App()
    sys.exit(LTV_Application)
