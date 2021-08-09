#region Python Imports
import time as stopwatch #nome diferente pra não confundir com a variável
import subprocess
import threading
import tempfile
import os
#endregion

#region LTV modules imports
#endregion 

#region other libraries imports
import numba as nb
import numpy as np
import lxml.etree as et
from pandas import read_excel, DataFrame
#endregion

class XMLParams():
    path: str = ""
    base_sample_rate: float = 1.000000
    date: str = "semData"
    time: str = "semHora"
    driver_name: str = "Piloto"
    vehicle_id: str = "E18"
    venue: str = "USP"
    short_comment: str = "xx (SD)"
    long_comment: str = "EESC USP Formula SAE"
    def __init__(self, path, base_sample_rate, date, time, driver_name, vehicle_id, venue, short_comment) -> None:
        self.path = path
        self.base_sample_rate = base_sample_rate
        self.date = date
        self.time = time
        self.driver_name = driver_name
        self.vehicle_id = vehicle_id
        self.venue = venue
        self.short_comment = short_comment
        



def highLow(high,low):
    """Retorna o número formado por dois bytes (um MSB/high, um LSB/low), pode ser dois int, dois arrays de int."""
    return high*256 + low

def emptyFill(size:int, number:int) -> np.ndarray:
    """Maneira mais rápida de preencher um ndarray com um valor específico."""
    arr = np.empty(size)
    arr.fill(number)
    return arr

def npLerp(a: np.ndarray) -> np.ndarray:
    """Substitui os -1 de um array pela interpolação linear dos valores mais próximos diferentes de -1.
        ex: [2 -1 -1 -1 3] vira [2 2.25 2.5 2.75 3] """
    whereNot = np.where(a != -1)[0]

    if len(whereNot) == 0 or len(whereNot) == 1:
        return None

    indicator = np.arange(len(a))
    interpolated = np.interp(indicator, whereNot, a[whereNot])
    return np.around(interpolated, 2)

def convertLog(bridge, params: XMLParams) -> None:
    """Converte um log .SD em XML em .ld (Motec) indicado com os parâmetros indicados. Consultar classe XMLparams para saber quais são os parâmetros."""
    bridge.setProgress.emit(0.1)
    
    
    #region criando dict
    LTVData = read_excel('LTVData.ods', sheet_name='motec').set_index('CODIGO')
    LTVDict = {}
    valuesDict = {'Time':[]}
    #endregion

    SDData = np.fromfile(params.path, dtype=np.uint8)
    indicesMsg = np.where((SDData == 68) & (np.roll(SDData,-1) == 76))[0][:-1] #retorna array de indices de onde foi encontrado D (68), quando encontra a sequência DL (68 76)
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

    # valuesarr = np.apply_along_axis(npLerp, 0, valuesarr)
    # valuesDFi = np.vectorize(npLerp)(valuesarr.to_numpy(dtype=np.uint8))
    # valuesDFv = np.vectorize(npLerp)(valuesDF)

        
    root = et.Element("telemetry")
    tree = et.ElementTree(root)

    et.SubElement(root, "device", serial_number="12007", name="ADL", version="4.2", base_sample_rate="1.000000")
    outing = et.SubElement(root, "outing", date=params.date, time=params.time, driver_name=params.driver_name, vehicle_id=params.vehicle_id, venue=params.venue, event="", session = "", short_comment=params.short_comment, long_comment=params.long_comment)
    channels = et.SubElement(root, "channels")

    
    channelCounter = 0
    for key, value in valuesDict.items():
        # if key == "Time":
        # with np.printoptions(threshold=np.inf):
        if key != "Time":
            value = npLerp(value)
        # else:
            # value = tostr(linearInterpolate(value))
        if type(value) == np.ndarray:
            value = str(list(value))[1:-1]
            et.SubElement(channels, "ch", channel_code=str(9000+channelCounter), long_name=key, short_name=str(channelCounter), units="s", sample_rate="100", data=value)
            channelCounter += 1


    filename = params.venue + params.date + params.short_comment

    print(filename)
    logTempFile = tempfile.NamedTemporaryFile(mode='r+')
    tree.write(logTempFile.name + ".xml", pretty_print=True, xml_declaration=True, encoding="UTF-8")
    bridge.setProgress.emit(0.2)
    #region criando XML
    logsDir = os.path.expanduser("~\Documents\LTV2-Logs")
    print(logsDir)
    if not os.path.exists(logsDir):
        os.makedirs(logsDir)
    
    print(logTempFile.name)
    subprocess.run(["ascii_to_motec.exe", logTempFile.name + ".xml", logsDir + "\\" + filename + ".ld", logTempFile.name + ".log", "3"], creationflags=0x00000100)
    bridge.setProgress.emit(1.0)
    bridge.callSuccessDialog.emit("Documento salvo em " + str(logsDir) )
    stopwatch.sleep(1)
    bridge.setProgress.emit(0.0)