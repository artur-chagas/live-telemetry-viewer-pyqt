import serial
import threading
import time

class SerialThread():

    def __init__(self, bridge):
        self.ser = serial.Serial(timeout=0)

    def startSerial(self, bridge, serial_port, baudrate):
        self.ser.port = serial_port
        self.ser.baudrate = baudrate
        self.ser.open()
        print(SerialThread(self))
        if self.ser.is_open:
            self.thr = threading.Thread(target=self.loopRead, args=(bridge,), daemon=True)
            self.thr.stop_condition = False
            self.thr.start()

    def loopRead(self, bridge):
        while(self.ser.is_open and not self.thr.stop_condition):
            #Delay para acumular mais dados no buffer de recepção
            time.sleep(0.05)
            readLength = self.ser.in_waiting
            s = self.ser.read(readLength)
            if (s):
                bridge._serialString += s.decode("utf-8")
                bridge.setConsoleText.emit(bridge._serialString)
                print(bridge._serialString)
        # self.data_stream = property("text")

    def closeSerial(self):
        if self.thr.is_alive:
            self.thr.stop_condition = True
        if self.ser.is_open:
            self.ser.close()
