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
    pip install PyQt5 Nuitka pyserial pdoc3
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
import signal
#endregion

#region qt imports
from PyQt5.QtGui import QGuiApplication, QFontDatabase, QFont
from PyQt5.QtQml import QQmlApplicationEngine
from PyQt5.QtCore import QObject, pyqtSignal, pyqtSlot
#endregion

#region py-backend imports
import formulaThread as formulaThread
import csvInterpreter as csvInterpreter
#endregion

#region other imports
import serial
import serial.tools.list_ports
#endregion

def highLow(high:int, low:int) -> int:
    value = high
    value <<= 8
    value |= low
    return value

class Bridge(QObject):
    def __init__(self, app, engine):
        QObject.__init__(self)
        self.app = app
        self.engine = engine
        self.serialStringsDict = {}
        self.threadsDict = {}

    callSuccessDialog = pyqtSignal(str) 
    callExceptionDialog = pyqtSignal(str)
    callComponentCreation = pyqtSignal("QVariant")
    setComboBoxModel = pyqtSignal(list)
    setConsoleText = pyqtSignal(str, str)
    setComponentValue = pyqtSignal(int, list)
    
    @pyqtSlot(str)
    def updateComponents(self, msg:bytearray):
        #USP 20 8 1 4 1 5 1 6 1 7
        #5553501408010401080110011F
        #0x55 0x53 0x50 0x14 0x08 0x01 0x04 0x01 0x08 0x01 0x10 0x01 0x1F
        #apenas mensagens pares por enquanto

        # if msg[0:3] == b"USP":
        #     msgSize = int(msg[4])
        #     readableMsg = array.array('I', int(msgSize/2) * [0])

        #     for i in range(0, int(msgSize/2)):
        #         readableMsg[i] = highLow(msg[5+2*i],msg[6+2*i])

        #     print(readableMsg)
        #     self.setComponentValue.emit(int(msg[3]), readableMsg)
        #     # print(int.from_bytes(msg[4], "big"))
        #     print(msg)
        # print(msg)
        if msg[0:3] == "USP":

            # for m in msg[0:3]:
            #     readableMsg.append(ord(m))
            
            msgSize = ord(msg[4])
            readableMsg = []

            for i in range(0, int(msgSize/2)):
                high = ord(msg[5+2*i])
                low = ord(msg[6+2*i])
                readableMsg.append(highLow(high,low))

            self.setComponentValue.emit(ord(msg[3]), readableMsg)
            # print(readableMsg)

    @pyqtSlot(str)
    def clearSerialString(self, port:str):
        self.serialStringsDict[port] = ""
        
    @pyqtSlot(result="QVariant")
    def createComponent(self, params:dict):
        self.callComponentCreation.emit(params)

    @pyqtSlot()
    def getSerialPorts(self):
        serialList = []
        try:
            for t in serial.tools.list_ports.comports():
                serialList += [str(t)]
        except Exception:
            self.callExceptionDialog.emit("Erro ao procurar portas serial")
            serialList = []
        self.setComboBoxModel.emit(serialList)

    @pyqtSlot(str)
    def connectSerial(self, port:str):
        try:
            ##se a porta já possui um thread, não cria um novo
            if port in self.threadsDict:
                pass
            ##caso contrário, cria novo thread e o conecta à porta
            self.threadsDict[port] = formulaThread.SerialThread(self, isReader = True)
            self.serialStringsDict[port] = ""
            self.threadsDict[port].startSerial(port, 115200)
        except serial.SerialException:
            self.callExceptionDialog.emit("Erro de permissão: a porta provavelmente já está sendo usada")
        except Exception as e:
            print(e)
            self.callExceptionDialog.emit(str(e))
        else:
            print(port +" conectada com sucesso")
            self.callSuccessDialog.emit(port + " conectado com sucesso")

    @pyqtSlot(str)
    def disconnectSerial(self, port:str):
        try:
            if self.threadsDict[port].ser.is_open:
                self.threadsDict[port].closeSerial()
                self.callSuccessDialog.emit(port + " desconectado com sucesso")
        except Exception as e:
            print(e) 
            self.callExceptionDialog.emit(str(e))

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

        # self.bridge.updateComponents(bytearray.fromhex('5553501408010401080110011F'))

        self.engine.quit.connect(self.app.quit)
        self.app.exec()

if __name__ == "__main__":
    LTV_Application = App()
    sys.exit(LTV_Application)
