#region Python Imports
import multiprocessing
import time as stopwatch #nome diferente pra não confundir com a variável
import subprocess
import threading
#endregion

#region LTV modules imports
#endregion 

#region other libraries imports
import numpy as np
import lxml.etree as et
from scipy.interpolate import interp1d
from pandas import read_excel
#endregion

class XMLparams():
    base_sample_rate: float = 1.000000
    date: str = "14/07/2021"
    time: str = "22:15"
    driver_name: str = "Piloto"
    vehicle_id: str = "E18"
    venue: str = "USP"
    short_comment: str = "xx (SD)"
    long_comment: str = "EESC USP Formula SAE"


filename="C:/Users/artur/repos/ltv-pyqt/Enduro ECPA Manhã 11-13.sd"

def highLow(high:int,low:int):
    return high*256 + low

"""retorna uma string separada por ", " a partir de uma lista
exemplo
"""

def tostr(l:list) -> str:
    if l is not None:
        return ", ".join(map(str,l))
    else:
        return None

"""maneira mais rápida de preencher um array"""
def emptyFill(size:int, number:int):
    arr = np.empty(size)
    arr.fill(number)
    return arr

def linearInterpolate(ls:list):
    y = np.array(ls)
    idx = np.where(y != -1) #encontrar onde não é -1
    
    for arr in idx:
        if np.shape(arr) == (0,) or np.shape(arr) == (1,):
            return None #se o array for todo -1, retorna nada
        # elif np.shape(arr) == (1,):
        #     y[arr[0]+1] = y[arr[0]]
        #     idx = np.array([arr[0],arr[0]])

    x = np.arange(len(y))
    interp = interp1d(x[idx],y[idx], fill_value="extrapolate")
    return np.around(interp(x), 2)

params = XMLparams()

root = et.Element("telemetry")
tree = et.ElementTree(root)

et.SubElement(root, "device", serial_number="12007", name="ADL", version="4.2", base_sample_rate="1.000000")
outing = et.SubElement(root, "outing", date=params.date, time=params.time, driver_name=params.driver_name, vehicle_id=params.vehicle_id, venue=params.venue, event="", session = "", short_comment=params.short_comment, long_comment=params.long_comment)
channels = et.SubElement(root, "channels")

def XMLwrite(valuesDict):
    counter = 0
    for key, val in valuesDict.items():
        if len(val) != 0:
            if key == 'Time':
                value = tostr(val)
            else:
                value = tostr(linearInterpolate(val))
            if value is not None:
                et.SubElement(channels, "ch", channel_code=str(9000+counter), long_name=key, short_name=str(counter), units="s", sample_rate="100", data=value)
                counter += 1


def convertLog():
    stopwatch1 = stopwatch.monotonic()

    #region criando dict
    LTVData = read_excel('LTVData.ods', sheet_name='motec').set_index('CODIGO')
    LTVDict = {}
    valuesDict = {'Time':[]}
    #endregion

    SDData = np.fromfile(filename, dtype=np.uint8)
    indicesMsg = np.where((SDData == 68) & (np.roll(SDData,-1) == 76))[0][:-1] #retorna indice de D (68), quando encontra DL (68 76)
    dataLength = SDData[indicesMsg+3]
    
    # possibilidade de implementar checagem das mensagens, mas o código abaixo não funcionou
    # indicesMsgErradas = np.where(SDData[indicesMsg+dataLength+7] != 68)
    # indicesMsg = np.delete(indicesMsg, indicesMsgErradas)

    #criando dict de informações para interpretação das mensagens (LTVDict) a partir do arquivo LTVData.ods
    #x[0]: tamanho, x[1]: titulo_motec, x[2]: eq-a, x[3]: eq-b, x[4]: eq-c  
    for i, x in enumerate(LTVData.values):
        valuesDict[x[1]] = emptyFill(len(indicesMsg), -1)
        if LTVDict.get(LTVData.index[i]) is None:
            LTVDict[LTVData.index[i]] = [(x[0], x[1], x[2], x[3], x[4])]
        else:
            LTVDict[LTVData.index[i]].append((x[0], x[1], x[2], x[3], x[4]))

    codesArray = SDData[indicesMsg+2]
    dataLength = SDData[indicesMsg+3]
    timeDelta = SDData[indicesMsg+4]

    valuesDict['Time'] = np.around(np.cumsum(timeDelta/1000),2) #soma todos os time delta em ordem, retornando um array de tempos

    for key, dictValue in LTVDict.items():
        where = np.where(codesArray == key)
        for i, t in enumerate(dictValue):
            if t[0] == 1:
                value = SDData[indicesMsg[where]+5+i].astype('float32')
                if t[3] != 0:
                    value *= t[3]
                    if t[4] != 0:
                        value += t[4]
                valuesDict[t[1]][where] = value
            if t[0] == 2:
                high = SDData[indicesMsg[where]+5+i]
                low = SDData[indicesMsg[where]+6+i]
                value = highLow(high,low).astype('float32')
                if t[3] != 0:
                    value *= t[3]
                    if t[4] != 0:
                        value += t[4]
                valuesDict[t[1]][where] = value


    #region criando XML
    
    # pool = multiprocessing.Pool()
    # poolInput = list(zip(list(valuesDict.keys()),list(valuesDict.values())))
    # pool.starmap(XMLwrite, poolInput)
    # pool.start()
    # pool.join()
    XMLwrite(valuesDict)
    tree.write('outnp.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")
    stopwatch.sleep(20)
    # subprocess.run(["ascii_to_motec.exe", "outnp.xml", "outnp.ld", "outnp.log", "3"])

    stopwatch2 = stopwatch.monotonic()
    print(stopwatch2-stopwatch1)

def convertLogThreaded():
    thread = threading.Thread(target=convertLog(), args=())
    thread.daemon = True
    thread.start()

if __name__ == '__main__':
    convertLogThreaded()