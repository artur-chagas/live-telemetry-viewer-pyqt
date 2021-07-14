import numpy as np

#D = 68 L = 76 uint8 

filename = "tinypeppa.SD"
lookup = {10:["G Force X",0,1]}
file = bytearray()

def highLow(high:int, low:int) -> int:
    value = high
    value <<= 8
    value |= low
    return value


with open(filename, 'rb') as f:
    for line in f:
        for i in range(0, len(line)):
            if line[i] == 68 and line[i+1]==76:
                print(lookup.get(line[i+2]))
            