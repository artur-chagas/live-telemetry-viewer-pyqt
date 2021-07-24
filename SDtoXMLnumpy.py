#SDtoXMLnumpy.pyx
import csvInterpreter
import numpy as np
from scipy.interpolate import interp1d
import lxml.etree as et
from pandas import read_excel
import time as stopwatch
stopwatch1 = stopwatch.monotonic()


filename="tiny2.sd"



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
    if l is not None:
        return ", ".join(map(str,l))
    else:
        return None

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
    
    
#region criando dict
LTVData = read_excel('LTVData.ods', sheet_name='motec').set_index('CODIGO')
LTVDict = {}
valuesDict = {'Time':[]}

SDData = np.fromfile(filename, dtype=np.uint8)
indicesMsg = np.where((SDData == 68) & (np.roll(SDData,-1) == 76))[0][:-1] #retorna indice de D (68), quando encontra DL (68 76)
dataLength = SDData[indicesMsg+3]

# indicesMsgErradas = np.where(SDData[indicesMsg+dataLength+7] != 68)
# indicesMsg = np.delete(indicesMsg, indicesMsgErradas)

    


#x[0]: tamanho, x[1]: titulo_motec, x[2]: eq-a, x[3]: eq-b, x[4]: eq-c  
for i, x in enumerate(LTVData.values):
    valuesDict[x[1]] = emptyFill(len(indicesMsg), -1)
    if LTVDict.get(LTVData.index[i]) is None:
        LTVDict[LTVData.index[i]] = [(x[0], x[1], x[2], x[3], x[4])]
    else:
        LTVDict[LTVData.index[i]].append((x[0], x[1], x[2], x[3], x[4]))
#endregion



# splitData = np.split(SDData, indicesMsg, axis = 0) #dados dividos conforme os indicesMsg

codesArray = SDData[indicesMsg+2]
dataLength = SDData[indicesMsg+3]
timeDelta = SDData[indicesMsg+4]


valuesDict['Time'] = np.around(np.cumsum(timeDelta/1000),2) #soma todos os time delta em ordem, retornando um array de tempos


for key, dictValue in LTVDict.items():
    print(key,dictValue)
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


print()




# timeCounter = 0.0
# for m in splitData: #cada mensagem
#     instructionList = LTVDict.get(m[2]) #message instruction list
#     dataLength = m[3]
#     timeDelta = m[4]
#     timeCounter += timeDelta/1000
#     valuesDict['Time'].append(round(timeCounter,2))

#     for key, value in valuesDict.items():
#         if key != 'Time':
            # value.append(-1.00)
#n[0]: tamanho, n[1]: titulo_motec, n[2]: eq-a, n[3]: eq-b, n[4]: eq-c  


    # c = 0
    # if instructionList is not None and len(m) == 5+dataLength:
    #     for n in instructionList:
    #         eqB = n[3]
    #         eqC = n[4]
    #         if n[0] == 2:
    #             val = highLow(m[5+c], m[6+c])
    #             if eqB != 0:
    #                 val *= eqB
    #                 if eqC != 0:
    #                     val += eqC
    #             val = round(val, 2)
    #             valuesDict[n[1]].pop()
    #             valuesDict[n[1]].append(val)
    #             c += 2
    #         if n[0] == 1:
    #             valuesDict[n[1]].pop()
    #             valuesDict[n[1]].append(5+c)
    #             c += 1
    #         c = 0
        

params = XMLparams()

root = et.Element("telemetry")
tree = et.ElementTree(root)

et.SubElement(root, "device", serial_number="12007", name="ADL", version="4.2", base_sample_rate="1.000000")
outing = et.SubElement(root, "outing", date=params.date, time=params.time, driver_name=params.driver_name, vehicle_id=params.vehicle_id, venue=params.venue, event="", session = "", short_comment=params.short_comment, long_comment=params.long_comment)
channels = et.SubElement(root, "channels")


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


# outfile = filename.split(".")[0]
# tree.write(outfile + '.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")
tree.write('outnp.xml', pretty_print=True, xml_declaration=True, encoding="UTF-8")

stopwatch2 = stopwatch.monotonic()
print(stopwatch2-stopwatch1)