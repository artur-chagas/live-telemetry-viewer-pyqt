from os import remove
import csvInterpreter
import lxml.etree as et
import numpy as np
from scipy.interpolate import interp1d

filename = "Enduro ECPA Manhã 11-13.sd"
file = bytearray()

infoDict = dict()

aux = []






def linearInterpolate(ls:list):
    y = np.array(ls)
    idx = np.nonzero(y+1) #encontrar onde não é -
    
    for arr in idx:
        if np.shape(arr) == (0,) or np.shape(arr) == (1,):
            np.place(y, y==-1, 0)
            return y #se o array for todo ou quase todo -1, retornar todo 0

    x = np.arange(len(y))
    interp = interp1d(x[idx],y[idx], fill_value="extrapolate")
    return np.around(interp(x), 2)
    


class XMLparams():
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

def dictInfo(name, info):
    if name[1] not in infoDict:
        infoDict[name[1]] = [info]
    else:
        aux = infoDict.get(name[1])
        aux.append(info)
        infoDict[name[1]] = aux
    # print(name[1], ':', info)


def tostr(l:list) -> str:
    return ", ".join(map(str,l))

listDicts = csvInterpreter.readCSV("components.csv")
bigdict = dict()

for d in listDicts:
    if int(d['INCLUIR_MOTEC']):
        if bigdict.get(int(d['CODIGO'])) is None:
            bigdict[(int(d['CODIGO']))] = [(int(d['TAM']), d['TITULO_MOTEC'], float(d['EQ-B']), float(d['EQ-C']))]
        else:
            bigdict[(int(d['CODIGO']))].append((int(d['TAM']), d['TITULO_MOTEC'], float(d['EQ-B']), float(d['EQ-C'])))

infoDict['Time']: list = []
time_counter: float = 0.00
values_list = []

with open(filename, 'rb') as f:
    # Leitura dos dados em binario e conversao em 'int8'
    values = np.fromfile(f, dtype=np.uint8)
    for idx, val in enumerate(values):
        if val == 68 and values[idx+1] == 76 and idx+2 < len(values) :
            values_tuple = (values[idx+2], values[idx+3], values[idx+4], values[idx+5], values[idx+6], values[idx+7], values[idx+8], values[idx+9], values[idx+10], values[idx+11], values[idx+12])
            values_list.append(values_tuple)

aux_list = []
count = int(3)


for x in values_list:
    # print()
    cod = x[0]
    count = int(3)
    time_counter += round(float(x[2]/1000),2)
    infoDict['Time'].append(time_counter)
    # print('TimeDelta : ', x[0])
    # print('DataLength : ', x[1])
    for key, value in bigdict.items():
        for y in value:
            dictInfo(y, float(-1.00))


    if bigdict.get(cod) is not None:
        for y in bigdict.get(cod):
            len_val = y[0]
            if count <= x[1] + 1:
                for z in range(0, len_val):
                    aux_list.append(x[count])
                    count += 1
                if y[0] == 2:
                    val = highLow(aux_list[0], aux_list[1])
                    b = y[2]
                    c = y[3]

                    if (b != 0):
                        val *= b
                        if (c != 0):
                            val += c
                    val = round(val, 2)
                    infoDict[y[1]].pop()
                    dictInfo(y, val)
                elif y[0] == 1:
                    infoDict[y[1]].pop()
                    dictInfo(y, aux_list[0])
                aux_list.clear()
            else: 
                break



params = XMLparams()

root = et.Element("telemetry")
tree = et.ElementTree(root)

et.SubElement(root, "device", serial_number="12007", name="ADL", version="4.2", base_sample_rate="1.000000")
outing = et.SubElement(root, "outing", date=params.date, time=params.time, driver_name=params.driver_name, vehicle_id=params.vehicle_id, venue=params.venue, event="", session = "", short_comment=params.short_comment, long_comment=params.long_comment)
channels = et.SubElement(root, "channels")


counter = 0
for key, value in infoDict.items():
    if len(value) != 0:
        et.SubElement(channels, "ch", channel_code=str(9000+counter), long_name=key, short_name=str(counter), units="s", sample_rate="100", data=tostr(linearInterpolate(value)))
        counter += 1


# outfile = filename.split(".")[0]
# tree.write(outfile + '.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")
tree.write('outDea.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")