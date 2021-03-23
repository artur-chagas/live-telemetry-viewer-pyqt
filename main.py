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
import pathos.helpers
import atexit
#endregion

class SerialProcess(pathos.helpers.mp.Process):

    def __init__(self, serial_port:str, bridge: QObject, baudrate=9600, timeout=3600):
        super(SerialProcess, self).__init__(target=self.startSerial, args=(serial_port, bridge, baudrate, timeout))
        print('SerialProcess.__init__()')
        self.daemon = True

    def startSerial(self, serial_port, bridge, baudrate, timeout):
        self.ser = serial.Serial(serial_port, baudrate=baudrate, timeout=timeout)
        self.loopRead()
        self.closeSerial()

    def loopRead(self, ):
        self.ser.read(17)
        while(self.ser.is_open):
            s = self.ser.readline()
            print(s)

#     def closeSerial(self):
#         if self.ser.is_open:
#             self.ser.close()


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
        self.p = SerialProcess(port, self)
        try:
            self.p.start()
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


if __name__ == "__main__":
    b = beacon.Functions()
    a = App()
    sys.exit(a)
