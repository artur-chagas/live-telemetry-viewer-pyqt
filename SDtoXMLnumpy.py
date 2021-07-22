#SDtoXMLnumpy.pyx
import csvInterpreter
import numpy as np
from scipy.interpolate import interp1d
import lxml.etree as et
from pandas import read_excel
import time as stopwatch
stopwatch1 = stopwatch.monotonic()


filename="Enduro ECPA Manhã 11-13.sd"



class XMLparams():
    base_sample_rate: float = 1.000000
    date: str = "14/07/2021"
    time: str = "22:15"
    driver_name: str = "aa"
    vehicle_id: str = "E18"
    venue: str = "USP"
    short_comment: str = "xx (SD)"
    long_comment: str = "EESC USP Formula SAE"


def highLow(high:int,low:int):
    return high*256 + low

def tostr(l:list) -> str:
    return ", ".join(map(str,l))

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
    
#region criando dict
LTVData = read_excel('LTVData.ods', sheet_name='motec').set_index('CODIGO')
LTVDict = {}
valuesDict = {'Time':[]}

#x[0]: tamanho, x[1]: titulo_motec, x[2]: eq-a, x[3]: eq-b, x[4]: eq-c  
for i, x in enumerate(LTVData.values):
    if LTVDict.get(LTVData.index[i]) is None:
        valuesDict[x[1]] = []
        LTVDict[LTVData.index[i]] = [[x[0], x[1], x[2], x[3], x[4]]]
    else:
        valuesDict[x[1]] = []
        LTVDict[LTVData.index[i]].append([x[0], x[1], x[2], x[3], x[4]])
#endregion


SDData = np.fromfile(filename, dtype=np.uint8)

indicesMsg = np.where((SDData == 68) & (np.roll(SDData,-1) == 76))[0] #retorna indice de D (68), quando encontra DL (68 76)
splitData = np.split(SDData, indicesMsg, axis = 0) #dados dividos conforme os indicesMsg


timeCounter = 0.0
for m in splitData: #cada mensagem
    instructionList = LTVDict.get(m[2]) #message instruction list
    dataLength = m[3]
    timeDelta = m[4]
    timeCounter += timeDelta/1000
    valuesDict['Time'].append(round(timeCounter,2))

    for key, value in valuesDict.items():
        if key != 'Time':
            value.append(-1.00)
#n[0]: tamanho, n[1]: titulo_motec, n[2]: eq-a, n[3]: eq-b, n[4]: eq-c  


    c = 0
    if instructionList is not None and len(m) == 5+dataLength:
        for n in instructionList:
            eqB = n[3]
            eqC = n[4]
            if n[0] == 2:
                val = highLow(m[5+c], m[6+c])
                if eqB != 0:
                    val *= eqB
                    if eqC != 0:
                        val += eqC
                val = round(val, 2)
                valuesDict[n[1]].pop()
                valuesDict[n[1]].append(val)
                c += 2
            if n[0] == 1:
                valuesDict[n[1]].pop()
                valuesDict[n[1]].append(5+c)
                c += 1
            c = 0
        

params = XMLparams()

root = et.Element("telemetry")
tree = et.ElementTree(root)

et.SubElement(root, "device", serial_number="12007", name="ADL", version="4.2", base_sample_rate="1.000000")
outing = et.SubElement(root, "outing", date=params.date, time=params.time, driver_name=params.driver_name, vehicle_id=params.vehicle_id, venue=params.venue, event="", session = "", short_comment=params.short_comment, long_comment=params.long_comment)
channels = et.SubElement(root, "channels")


counter = 0
for key, value in valuesDict.items():
    if len(value) != 0:
        et.SubElement(channels, "ch", channel_code=str(9000+counter), long_name=key, short_name=str(counter), units="s", sample_rate="100", data=tostr(linearInterpolate(value)))
        counter += 1


# outfile = filename.split(".")[0]
# tree.write(outfile + '.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")
tree.write('outnp.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")

stopwatch2 = stopwatch.monotonic()
print(stopwatch2-stopwatch1)