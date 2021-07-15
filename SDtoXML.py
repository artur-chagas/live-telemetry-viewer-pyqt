import csvInterpreter
import lxml.etree as et
#D = 68 L = 76 uint8 

filename = "tiny2.SD"
lookup = {10:["G Force X",0,1]}
file = bytearray()




def highLow(high:int, low:int) -> int:
    value = high
    value <<= 8
    value |= low
    return value

listDicts = csvInterpreter.readCSV("components.csv")
bigdict = dict()

print(listDicts)
for d in listDicts:
    if bigdict.get(int(d['CODIGO'])) is None:
        bigdict[(int(d['CODIGO']))] = [(int(d['TAM']), d['TITULO'])]
    else:
        bigdict[(int(d['CODIGO']))].append((int(d['TAM']), d['TITULO']))

#     aux = []

t = []

with open(filename, 'rb') as f:
    for line in f:
        for i in range(0, len(line)):
            if line[i] == 68 and line[i+1]==76:
                if (i+2 < len(line)):
                    t.append(bigdict.get(line[i+2]))

root = et.Element("root")