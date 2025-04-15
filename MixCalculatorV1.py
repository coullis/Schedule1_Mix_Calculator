import itertools
import sqlite3
import json
from tqdm import tqdm

conn = sqlite3.connect('Mix.db')
cursor = conn.cursor()

cursor.execute('''
    CREATE TABLE IF NOT EXISTS combinations (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        Item_Count INTEGER,
        Product TEXT,
        Substances TEXT,
        Effects TEXT,
        Cost INTEGER,
        Sell_Price INTEGER,
        Profit INTEGER
    )
''')

effects = {'sh' : 0.60,
           'zo' : 0.58,  
           'cy' : 0.56,
           'ag' : 0.54,
           'lf' : 0.52,
           'el' : 0.50,
           'gl' : 0.48,
           'tt' : 0.46,
           'tp' : 0.44,
           'je' : 0.42,
           'be' : 0.40,
           'sp' : 0.38,
           'fo' : 0.36,
           'sl' : 0.34,
           'at' : 0.32,
           'ba' : 0.30,
           'cd' : 0.28,
           'se' : 0.26,
           'sn' : 0.24,
           'en' : 0.22,
           'gi' : 0.20,
           'eu' : 0.18,
           'fc' : 0.16,
           're' : 0.14,
           'mu' : 0.12,
           'ca' : 0.10,
           'di' : 0,
           'ex' : 0,
           'la' : 0,
           'pa' : 0,
           'sc' : 0,
           'si' : 0,
           'sm' : 0,
           'to' : 0
           }


def applyRules(l, rules):
    for i in range(len(l)):
        if l[i] in rules and rules[l[i]] not in l:
            l[i] = rules[l[i]]
    return l

def addCuke(l, s):
    rules = {'to': 'eu', 'sl': 'mu', 'sn': 'pa', 'fo': 'cy', 'gi': 'tp', 'mu': 'at', 'eu': 'la'}
    l = applyRules(l , rules)
    if 'en' not in l: l.append('en')
    s.append('Cuke')
    return l, s, 2

def addFluMedicine(l, s):
    rules = {'ca': 'be', 'at': 'mu', 'tp': 'gi', 'cy': 'fo', 'mu': 'sl', 'la': 'eu', 'eu': 'to', 'fc': 'ca', 'el': 're', 'sh': 'pa'}
    l = applyRules(l, rules)
    if 'se' not in l: l.append('se')
    s.append('FluMedicine')
    return l, s, 5

def addGasoline(l, s):
    rules = {'gi': 'sm', 'je': 'sn', 'sn': 'tt', 'mu': 'se', 'en': 'eu', 'eu': 'en',
             'la': 'fo', 'di': 'gl', 'pa': 'ca', 'el': 'di', 'sh': 'fc'}
    l = applyRules(l, rules)
    if 'to' not in l: l.append('to')
    s.append('Gasoline')
    return l, s, 5

def addDonut(l, s):
    rules = {'cd': 'ex', 'ba': 'sn', 'ag': 'sl', 'je': 'gi', 'fc': 'eu', 'sh': 'en'}
    l = applyRules(l, rules)
    if 'cd' not in l: l.append('cd')
    s.append('Donut')
    return l, s, 3

def addEnergyDrink(l, s):
    rules = {'se': 'mu', 'eu': 'en', 'sp': 'eu', 'tt': 'sn', 'gl': 'di',
             'fo': 'la', 'di': 'el', 'sc': 'ba', 'fc': 'sh'}
    l = applyRules(l, rules)
    if 'at' not in l: l.append('at')
    s.append('EnergyDrink')
    return l, s, 6

def addMouthWash(l, s):
    rules = {'ca': 'ag', 'cd': 'sn', 'ex': 'se', 'fc': 'je'}
    l = applyRules(l, rules)
    if 'ba' not in l: l.append('ba')
    s.append('MouthWash')
    return l, s, 4

def addMotorOil(l, s):
    rules = {'en': 'mu', 'fo': 'to', 'eu': 'se', 'pa': 'ag', 'mu': 'sc'}
    l = applyRules(l, rules)
    if 'sl' not in l: l.append('sl')
    s.append('MotorOil')
    return l, s, 6

def addBanana(l, s):
    rules = {'en': 'tp', 'ca': 'sn', 'to': 'sm', 'lf': 're', 'cy': 'tp',
             'di': 'fc', 'fc': 'si', 'pa': 'je', 'sm': 'ag'}
    l = applyRules(l, rules)
    if 'gi' not in l: l.append('gi')
    s.append('Banana')
    return l, s, 2

def addChili(l, s):
    rules = {'at': 'eu', 'ag': 'tt', 'sn': 'be', 'mu': 'to', 'la': 'lf', 'sh': 're'}
    l = applyRules(l, rules)
    if 'sp' not in l: l.append('sp')
    s.append('Chili')
    return l, s, 7

def addIodine(l, s):
    rules = {'ca': 'ba', 'to': 'sn', 'fo': 'pa', 'cd': 'gi', 'eu': 'si', 're': 'tp'}
    l = applyRules(l, rules)
    if 'je' not in l: l.append('je')
    s.append('Iodine')
    return l, s, 8

def addParacetamol(l, s):
    rules = {'en': 'pa', 'ca': 'sl', 'to': 'tt', 'sp': 'be', 'gl': 'to',
             'fo': 'ca', 'mu': 'ag', 'pa': 'ba', 'el': 'at', 'fc': 'gi'}
    l = applyRules(l, rules)
    if 'sn' not in l: l.append('sn')
    s.append('Paracetamol')
    return l, s, 3

def addViagra(l, s):
    rules = {'at': 'sn', 'eu': 'be', 'la': 'ca', 'di': 'to'}
    l = applyRules(l, rules)
    if 'tt' not in l: l.append('tt')
    s.append('Viagra')
    return l, s, 4

def addHorseSemen(l, s):
    rules = {'ag': 'ca', 'gi': 're', 'tp': 'el'}
    l = applyRules(l, rules)
    if 'lf' not in l: l.append('lf')
    s.append('HorseSemen')
    return l, s, 9

def addMegaBean(l, s):
    rules = {'ca': 'gl', 'je': 'pa', 'at': 'la',
             'sl': 'to', 'tp': 'en', 'si': 'fc', 'fc': 'di',
             'sn': 'gl', 'tp': 'cy', 'sh': 'el', 'en': 'cy', 'sn': 'ca'}
    l = applyRules(l, rules)
    if 'fo' not in l: l.append('fo')
    s.append('MegaBean')
    return l, s, 7

def addAddy(l, s):
    rules = {'se': 'gi', 'lf': 'el', 'gl': 're', 'fo': 'en', 'ex': 'eu'}
    l = applyRules(l, rules)
    if 'tp' not in l: l.append('tp')
    s.append('Addy')
    return l, s, 9

def addBattery(l, s):
    rules = {'mu': 'tt', 'eu': 'zo', 'el': 'eu', 'la': 'cd', 'cy': 'gl', 'sh': 'mu'}
    l = applyRules(l, rules)
    if 'be' not in l: l.append('be')
    s.append('Battery')
    return l, s, 8

def mix(prod, n):
    currentEffects = []
    substances = []
    cost = 0
    productEffects = {'ogKush' : 'ca', 
                      'sourDiesel' : 're',
                      'greenCrack' : 'en',
                      'grandaddyPurple' : 'se',
                      }
    
    if prod in ['ogKush', 'sourDiesel', 'greenCrack', 'grandaddyPurple']:
        currentEffects = [productEffects[prod]]
        basePrice = 35
    elif prod == 'meth':
        basePrice = 70
    elif prod == 'coke':
        basePrice = 150
    else:
        print("Invalid Base Product")

    ingredients = [addGasoline, addAddy, addBanana, addBattery, addChili, addCuke, addDonut, addEnergyDrink, addFluMedicine, addHorseSemen, addIodine, addMegaBean, addMotorOil, addMouthWash, addParacetamol, addViagra]
    combinations = itertools.product(ingredients, repeat=n)
    for combo in tqdm(combinations, total=16**n, ncols = 100, colour="cyan", desc="Processing combinations"):
        if prod in ['meth', 'coke']:
            currentEffects = []
        else:
            currentEffects = [productEffects[prod]]
        substances = []
        cost = 0
        for i in combo:
            currentEffects, substances, itemPrice = i(currentEffects, substances)
            cost += itemPrice
        substances_json = json.dumps(substances)
        currentEffects_json = json.dumps(currentEffects)
        finalPrice = basePrice * (1 + sum([effects[i] for i in currentEffects]))
        cursor.execute('INSERT INTO combinations (Item_Count, Product, Substances, Effects, Cost, Sell_Price, Profit) VALUES (?, ?, ?, ?, ?, ?, ?)', (n, prod, substances_json, currentEffects_json, cost, round(finalPrice), round(finalPrice)-cost))

def manualMix(prod, items):
    currentEffects = []
    substances = []
    cost = 0
    productEffects = {'ogKush' : 'ca', 
                      'sourDiesel' : 're',
                      'greenCrack' : 'en',
                      'grandaddyPurple' : 'se',
                      }
    
    if prod in ['ogKush', 'sourDiesel', 'greenCrack', 'grandaddyPurple']:
        currentEffects = [productEffects[prod]]
        basePrice = 35
    elif prod == 'meth':
        basePrice = 70
    elif prod == 'coke':
        basePrice = 150
    else:
        print("Invalid Base Product")

    ingredients = [addGasoline, addAddy, addBanana, addBattery, addChili, addCuke, addDonut, addEnergyDrink, addFluMedicine, addHorseSemen, addIodine, addMegaBean, addMotorOil, addMouthWash, addParacetamol, addViagra]
    
    for i in items:
        currentEffects, substances, itemPrice = i(currentEffects, substances)
        cost += itemPrice
    substances_json = json.dumps(substances)
    currentEffects_json = json.dumps(currentEffects)
    finalPrice = basePrice * (1 + sum([effects[i] for i in currentEffects]))
    cursor.execute('INSERT INTO combinations (Item_Count, Product, Substances, Effects, Cost, Sell_Price, Profit) VALUES (?, ?, ?, ?, ?, ?, ?)', (len(substances), prod, substances_json, currentEffects_json, cost, round(finalPrice), round(finalPrice)-cost))


manualMix('sourDiesel', [addHorseSemen, addBattery, addChili, addBanana, addMouthWash, addViagra])

#mix('ogKush', 6)

conn.commit()
conn.close()

'''
substances: 1 - iterations: 16 - time: 00:00:00 - 185.04 it/s
substances: 2 - iterations: 256 - time: 00:00:01 - 182.94 it/s
substances: 3 - iterations: 4096 - time: 00:00:24 - 170.41 it/s
substances: 4 - iterations: 65536 - time: 00:08:14 - 132.42 it/s
substances: 5 - iterations: 1048576 - time: 01:35:00 - 02:08:14             (estimation)
substances: 6 - iterations: 16777216 - time: 25:30:00 - 35:46:34            (estimation)
substances: 7 - iterations: 268435456 - time: 17:00:00:00 - 27:17:51:29     (estimation)
substances: 8 - iterations: 4294967296 - time: 270:00:00:00 - 508:10:17:00  (estimation)

'''