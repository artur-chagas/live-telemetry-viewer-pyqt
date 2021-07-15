import threading
import time
import serial

class SerialThread():

    def __init__(self, bridge, isReader:bool):
        self.ser = serial.Serial(timeout=0)
        if isReader:
            self.thr = threading.Thread(target=self.loopRead, daemon=True)
        else:
            self.thr = threading.Thread(target=self.send, daemon=True)
        self.bridge = bridge
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
                self.bridge.serialStringsDict[self.ser.port] = s.decode("ISO-8859-1")
                self.bridge.setConsoleText.emit(self.bridge.serialStringsDict[self.ser.port], str(self.ser.port))
        # self.data_stream = property("text")

    def send(self, msg:bytes):
        msgHex = bytes.fromhex(msg)
        self.ser.write(bytes.fromhex(msg))
        print("Enviado (bytes) " + str(msgHex) )

    def closeSerial(self):
        try:
            if self.thr.is_alive:
                self.thr.stop_condition = True
                self.ser.close()
        except Exception:
            pass
