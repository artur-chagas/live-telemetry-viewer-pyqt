import csv

def removeComments(file):
    for row in file:
        raw = row.split('#')[0].strip()
        if raw: yield raw

def readCSV(file:str):
    listDicts = []
    with open(file, encoding="utf8") as arq:
        reader = csv.DictReader(removeComments(arq))
        for row in reader:
            listDicts.append(row)
        return listDicts      