import csvInterpreter
import lxml.etree as et
from typing import NamedTuple
import time as stopwatch
#D = 68 L = 76 uint8 
stopwatch1 = stopwatch.monotonic()

filename = "tiny2.sd"
file = bytearray()


class XMLparams(NamedTuple):
    base_sample_rate: float = 1.000000
    date: str = "14/07/2021"
    time: str = "22:15"
    driver_name: str = "aa"
    vehicle_id: str = "E18"
    venue: str = "USP"
    short_comment: str = "xx (SD)"
    long_comment: str = "EESC USP Formula SAE"


def highLow(high:int, low:int) -> int:
    value = high
    value <<= 8
    value |= low
    return value

def tostr(l:list) -> str:
    return ", ".join(map(str,l))

listDicts = csvInterpreter.readCSV("components.csv")
bigdict = {}

valuesDict = {}
valuesDict['Time'] = []
time = 0.00

for d in listDicts:
    if int(d['INCLUIR_MOTEC']) == 1:
        if bigdict.get(int(d['CODIGO'])) is None and d['EQ-B'] != "" and d['EQ-C'] != "":
            bigdict[(int(d['CODIGO']))] = [(int(d['TAM']), d['TITULO_MOTEC'], float(d['EQ-B']), float(d['EQ-C']))]
            valuesDict[d['TITULO_MOTEC']] = []
        else:
            bigdict[(int(d['CODIGO']))].append((int(d['TAM']), d['TITULO_MOTEC']))

with open(filename, 'rb') as f:
    for line in f:
        for i in range(0, len(line)):
            if line[i] == 68 and line[i+1]==76:
                if (i+6 < len(line)):
                    time += (line[i+4]/1000)
                    valuesDict['Time'].append(float("{:.2f}".format(time)))

                    ls = bigdict.get(i+2)

                    if ls is not None:
                        for key, value in valuesDict.items():
                            # for j in range(0, len(ls)):
                            j=0
                            if key is ls[j][1]:
                                if ls[j][0] == 2:
                                    val = highLow(line[i+5+j], line[i+6+j])
                                    val = val*ls[j][2] + ls[j][3]  #multiplicar por EQ-B e adicionar EQ-C
                                    value.append(float("{:.2f}".format(val)))
                                elif ls[j][0] == 1:
                                    val = line[i+5+j]
                                    value.append(float("{:.2f}".format(val)))
                            else:
                                value.append(float("{:.2f}".format(-1.00)))



                        # for j in range(0, len(ls)):
                        #     if ls[j][0] == 2 and i+6+j < len(line):
                        #         if valuesDict.get(ls[j][1]) is not None:
                        #             val2 = highLow(line[i+5+j], line[i+6+j])
                        #             valuesDict.get(ls[j][1]).pop()
                        #             valuesDict.get(ls[j][1]).append(float("{:.2f}".format(val2)))
                        #     elif ls[j][0] == 1 and i+5+j < len(line):
                        #         if valuesDict.get(ls[j][1]) is not None:
                        #             val1 = line[i+5+j]
                        #             valuesDict.get(ls[j][1]).pop()
                        #             valuesDict.get(ls[j][1]).append(float("{:.2f}".format(val1)))
                    


params = XMLparams()

root = et.Element("telemetry")
tree = et.ElementTree(root)

et.SubElement(root, "device", serial_number="12007", name="ADL", version="4.2", base_sample_rate="1.000000")
outing = et.SubElement(root, "outing", date=params.date, time=params.time, driver_name=params.driver_name, vehicle_id=params.vehicle_id, venue=params.venue, event="", session = "", short_comment=params.short_comment, long_comment=params.long_comment)
channels = et.SubElement(root, "channels")


counter = 0
for key, value in valuesDict.items():
    et.SubElement(channels, "ch", channel_code=str(9000+counter), long_name=key, short_name=str(counter), units="s", sample_rate="100", data=tostr(value))
    counter += 1


# outfile = filename.split(".")[0]
# tree.write(outfile + '.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")
tree.write('out.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")
stopwatch2 = stopwatch.monotonic()
print(stopwatch2-stopwatch1)