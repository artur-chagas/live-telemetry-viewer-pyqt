from re import split
import threading
import time
import serial
import SDtoXML
import numpy as np

class SerialThread():

    def __init__(self, bridge, isReader:bool, isReceptor:bool):
        self.ser = serial.Serial(timeout=0)
        self.bridge = bridge
        self.isReceptor = isReceptor
        if isReader:
            self.thr = threading.Thread(target=self.loopRead, daemon=True)
        else:
            self.thr = threading.Thread(target=self.playLog, daemon=True)
            self.period = 0 #log player precisa de um período
            self.splitMessages = None
    def startSerial(self, serial_port, baudrate):
        self.ser.port = serial_port
        self.ser.baudrate = baudrate
        self.ser.open()
        if self.ser.is_open:
            self.thr.stop_condition = False
            self.thr.start()
    def loopRead(self):
        while(self.ser.is_open and not self.thr.stop_condition):
            #Delay para acumular mais dados no buffer de recepção
            time.sleep(0.05)
            readLength = self.ser.in_waiting
            s = self.ser.read(readLength)
            if (s):
                if self.isReceptor:
                    self.bridge.serialStringsDict[self.ser.port] = s.decode("ISO-8859-1")
                    self.bridge.updateComponents(s)
                    # self.bridge.serialStringsDict[self.ser.port] = s.hex()
                    self.bridge.setConsoleText.emit(self.bridge.serialStringsDict[self.ser.port], str(self.ser.port))
                else:
                    self.bridge.serialStringsDict[self.ser.port] = s.decode("ISO-8859-1")
                    self.bridge.setConsoleText.emit(self.bridge.serialStringsDict[self.ser.port], str(self.ser.port))
        # self.data_stream = property("text")


    def playLog(self):
        if self.splitMessages != None and self.period != 0:
            for msg in self.splitMessages:
                if len(msg) > 4:
                    msg = np.delete(msg, 4) #deleta o timeDelta da msg do datalogger
                    msg = np.insert(msg[2:], 0, [85,83,80], axis = 0)
                    self.ser.write(msg)
                    time.sleep(self.period/100)

    def closeSerial(self):
        try:
            if self.thr.is_alive:
                self.thr.stop_condition = True
                self.ser.close()
        except Exception:
            pass

class LogConversionThread():
    def __init__(self, bridge, params:SDtoXML.XMLParams):
        self.thr = threading.Thread(target=SDtoXML.convertLog, args=(bridge,params), daemon=True)
    def start(self):
        self.thr.start()