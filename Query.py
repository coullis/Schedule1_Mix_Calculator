import sqlite3
import os
import json

def fetch():
    if os.path.exists("Mix.db"):
        conn = sqlite3.connect('Mix.db')
        cursor = conn.cursor()
        cursor.execute("SELECT * FROM combinations ORDER BY Profit DESC LIMIT 4")
        rows = cursor.fetchall()
        for i in rows:
            print(i)
        conn.close()
    else:
        print("The file does not exist")

def insert():
    data = [
    (13, 1, 'ogKush', ['MouthWash'], ['ag', 'ba'], 4, 64, 60),
    (6, 1, 'sourDiesel', ['Iodine'], ['tp', 'je'], 8, 65, 57),
    (8, 1, 'greenCrack', ['MegaBean'], ['cy', 'fo'], 7, 67, 60),
    (9, 1, 'grandaddyPurple', ['Viagra'], ['se', 'tt'], 4, 60, 56),
    (12, 1, 'meth', ['Viagra'], ['tt'], 4, 102, 98),
    (7, 1, 'coke', ['HorseSemen'], ['lf'], 9, 228, 219),
    (91, 2, 'ogKush', ['Cuke', 'MegaBean'], ['gl', 'cy', 'fo'], 9, 84, 75),
    (167, 2, 'sourDiesel', ['Iodine', 'Viagra'], ['tp', 'je', 'tt'], 12, 81, 69),
    (183, 2, 'greenCrack', ['MegaBean', 'Viagra'], ['cy', 'fo', 'tt'], 11, 83, 72),
    (83, 2, 'grandaddyPurple', ['Cuke', 'MegaBean'], ['se', 'cy', 'fo'], 9, 76, 67),
    (150, 2, 'meth', ['HorseSemen', 'Viagra'], ['lf', 'tt'], 13, 139, 126),
    (18, 2, 'coke', ['Addy', 'HorseSemen'], ['el', 'lf'], 18, 303, 285),
    (1471, 3, 'ogKush', ['Cuke', 'MegaBean', 'Viagra'], ['gl', 'cy', 'fo', 'tt'], 13, 100, 87),
    (2706, 3, 'sourDiesel', ['Iodine', 'HorseSemen', 'Viagra'], ['el', 'je', 'lf', 'tt'], 21, 102, 81),
    (655, 3, 'greenCrack', ['Banana', 'HorseSemen', 'Iodine'], ['el', 'tp', 'lf', 'je'], 19, 101, 82),
    (1458, 3, 'grandaddyPurple', ['Cuke', 'MegaBean', 'Viagra'], ['se', 'cy', 'fo', 'tt'], 13, 92, 79),
    (1454, 3, 'meth', ['Cuke', 'MegaBean', 'Viagra'], ['cy', 'fo', 'tt'], 13, 167, 154),
    (399, 3, 'coke', ['Addy', 'HorseSemen', 'Viagra'], ['el', 'lf', 'tt'], 22, 372, 350),
    (1323, 4, 'ogKush', ['Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'zo', 'cy', 'be', 'fo'], 22, 118, 96),
    (23447, 4, 'sourDiesel', ['Cuke', 'MegaBean', 'Iodine', 'MotorOil'], ['tp', 'cy', 'ag', 'je', 'sl'], 23, 116, 93),
    (1515, 4, 'greenCrack', ['Gasoline', 'Cuke', 'Viagra', 'MegaBean'], ['gl', 'be', 'cy', 'tt', 'fo'], 18, 114, 96),
    (9608, 4, 'grandaddyPurple', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean'], ['se', 'el', 'cy', 'lf', 'fo'], 20, 112, 92),
    (9606, 4, 'meth', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean'], ['el', 'cy', 'lf', 'fo'], 20, 206, 186),
    (9603, 4, 'coke', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean'], ['el', 'cy', 'lf', 'fo'], 20, 441, 421),
    (21439, 5, 'ogKush', ['Gasoline', 'Cuke', 'Battery', 'MegaBean', 'Viagra'], ['gl', 'zo', 'cy', 'be', 'fo', 'tt'], 26, 134, 108),
    (375475, 5, 'sourDiesel', ['Cuke', 'MegaBean', 'Iodine', 'MotorOil', 'Viagra'], ['tp', 'cy', 'ag', 'je', 'sl', 'tt'], 27, 132, 105),
    (918818, 5, 'greenCrack', ['Paracetamol', 'Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'tt', 'zo', 'cy', 'be', 'fo'], 25, 134, 109),
    (154017, 5, 'grandaddyPurple', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Viagra'], ['se', 'el', 'cy', 'lf', 'fo', 'tt'], 24, 128, 104),
    (154016, 5, 'meth', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Viagra'], ['el', 'cy', 'lf', 'fo', 'tt'], 24, 238, 214),
    (154016, 5, 'coke', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Viagra'], ['el', 'cy', 'lf', 'fo', 'tt'], 24, 510, 486),
    (5266939, 6, 'ogKush', ['Cuke', 'Gasoline', 'Cuke', 'MouthWash', 'Viagra', 'MegaBean'], ['ag', 'gl', 'be', 'cy', 'ba', 'tt', 'fo'], 24, 144, 120),
    (2464650, 6, 'sourDiesel', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Iodine', 'MotorOil'], ['tp', 'el', 'cy', 'lf', 'ag', 'je', 'sl'], 34, 151, 117),
    (15451418, 6, 'greenCrack', ['Paracetamol', 'MegaBean', 'MotorOil', 'Cuke', 'Battery', 'MegaBean'], ['ag', 'gl', 'zo', 'tt', 'cy', 'be', 'fo'], 33, 153, 120),
    (5750309, 6, 'grandaddyPurple', ['Cuke', 'EnergyDrink', 'MegaBean', 'Paracetamol', 'Chili', 'MouthWash'], ['tt', 'cy', 'lf', 'ag', 'be', 'sp', 'ba'], 29, 146, 117),
    (6161685, 6, 'meth', ['Cuke', 'Paracetamol', 'Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'tt', 'zo', 'cy', 'be', 'fo'], 27, 269, 242),
    (6161690, 6, 'coke', ['Cuke', 'Paracetamol', 'Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'tt', 'zo', 'cy', 'be', 'fo'], 27, 576, 549)
    ]

    conn = sqlite3.connect('Mix.db')
    cursor = conn.cursor()

    cursor.execute('''
        CREATE TABLE IF NOT EXISTS combinations (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            Iteration INTEGER,
            Item_Count INTEGER,
            Product TEXT,
            Substances TEXT,
            Effects TEXT,
            Cost INTEGER,
            Sell_Price INTEGER,
            Profit INTEGER
        )
    ''')
    for i in data:
        cursor.execute('INSERT INTO combinations (Iteration, Item_Count, Product, Substances, Effects, Cost, Sell_Price, Profit) VALUES (?, ?, ?, ?, ?, ?, ?, ?)', (i[0], i[1], i[2], json.dumps(i[3]), json.dumps(i[4]), i[5], i[6], i[7]))
    conn.commit()
    conn.close()

insert()

'''
Coullis 1 items best Profit:
OGKush:
(13, 1, 'ogKush', ['MouthWash'], ['ag', 'ba'], 4, 64, 60)
SourDiesel:
(6, 1, 'sourDiesel', ['Iodine'], ['tp', 'je'], 8, 65, 57)
GreenCrack:
(8, 1, 'greenCrack', ['MegaBean'], ['cy', 'fo'], 7, 67, 60)
GrandaddyPurple:
(9, 1, 'grandaddyPurple', ['Viagra'], ['se', 'tt'], 4, 60, 56)
Meth:
(12, 1, 'meth', ['Viagra'], ['tt'], 4, 102, 98)
Coke:
(7, 1, 'coke', ['HorseSemen'], ['lf'], 9, 228, 219)

Coullis 2 items best Profit:
OGKush:
(91, 2, 'ogKush', ['Cuke', 'MegaBean'], ['gl', 'cy', 'fo'], 9, 84, 75)
SourDiesel:
(167, 2, 'sourDiesel', ['Iodine', 'Viagra'], ['tp', 'je', 'tt'], 12, 81, 69)
GreenCrack:
(183, 2, 'greenCrack', ['MegaBean', 'Viagra'], ['cy', 'fo', 'tt'], 11, 83, 72)
GrandaddyPurple:
(83, 2, 'grandaddyPurple', ['Cuke', 'MegaBean'], ['se', 'cy', 'fo'], 9, 76, 67)
Meth:
(150, 2, 'meth', ['HorseSemen', 'Viagra'], ['lf', 'tt'], 13, 139, 126)
Coke:
(18, 2, 'coke', ['Addy', 'HorseSemen'], ['el', 'lf'], 18, 303, 285)

Coullis 3 items best Profit:
OGKush:
(1471, 3, 'ogKush', ['Cuke', 'MegaBean', 'Viagra'], ['gl', 'cy', 'fo', 'tt'], 13, 100, 87)
SourDiesel:
(2706, 3, 'sourDiesel', ['Iodine', 'HorseSemen', 'Viagra'], ['el', 'je', 'lf', 'tt'], 21, 102, 81)
GreenCrack:
(655, 3, 'greenCrack', ['Banana', 'HorseSemen', 'Iodine'], ['el', 'tp', 'lf', 'je'], 19, 101, 82)
GrandaddyPurple:
(1458, 3, 'grandaddyPurple', ['Cuke', 'MegaBean', 'Viagra'], ['se', 'cy', 'fo', 'tt'], 13, 92, 79)
Meth:
(1454, 3, 'meth', ['Cuke', 'MegaBean', 'Viagra'], ['cy', 'fo', 'tt'], 13, 167, 154)
Coke:
(399, 3, 'coke', ['Addy', 'HorseSemen', 'Viagra'], ['el', 'lf', 'tt'], 22, 372, 350)

Coullis 4 items best Profit:
OGKush:
['Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'zo', 'cy', 'be', 'fo'], 22, 118, 96)
SourDiesel:
(23447, 4, 'sourDiesel', ['Cuke', 'MegaBean', 'Iodine', 'MotorOil'], ['tp', 'cy', 'ag', 'je', 'sl'], 23, 116, 93)
GreenCrack:
(1515, 4, 'greenCrack', ['Gasoline', 'Cuke', 'Viagra', 'MegaBean'], ['gl', 'be', 'cy', 'tt', 'fo'], 18, 114, 96)
GrandaddyPurple:
(9608, 4, 'grandaddyPurple', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean'], ['se', 'el', 'cy', 'lf', 'fo'], 20, 112, 92)
Meth:
(9606, 4, 'meth', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean'], ['el', 'cy', 'lf', 'fo'], 20, 206, 186)
Coke:
(9603, 4, 'coke', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean'], ['el', 'cy', 'lf', 'fo'], 20, 441, 421)

Coullis 5 items best Profit:
OGKush:
(21439, 5, 'ogKush', ['Gasoline', 'Cuke', 'Battery', 'MegaBean', 'Viagra'], ['gl', 'zo', 'cy', 'be', 'fo', 'tt'], 26, 134, 108)
SourDiesel:
(375475, 5, 'sourDiesel', ['Cuke', 'MegaBean', 'Iodine', 'MotorOil', 'Viagra'], ['tp', 'cy', 'ag', 'je', 'sl', 'tt'], 27, 132, 105)
GreenCrack:
(918818, 5, 'greenCrack', ['Paracetamol', 'Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'tt', 'zo', 'cy', 'be', 'fo'], 25, 134, 109)
GrandaddyPurple:
(154017, 5, 'grandaddyPurple', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Viagra'], ['se', 'el', 'cy', 'lf', 'fo', 'tt'], 24, 128, 104)
Meth:
(154016, 5, 'meth', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Viagra'], ['el', 'cy', 'lf', 'fo', 'tt'], 24, 238, 214)
Coke:
(154016, 5, 'coke', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Viagra'], ['el', 'cy', 'lf', 'fo', 'tt'], 24, 510, 486)

Coullis 6 items best Profit:
OGKush:
(5266939, 6, 'ogKush', ['Cuke', 'Gasoline', 'Cuke', 'MouthWash', 'Viagra', 'MegaBean'], ['ag', 'gl', 'be', 'cy', 'ba', 'tt', 'fo'], 24, 144, 120)
SourDiesel:
(2464650, 6, 'sourDiesel', ['Banana', 'Cuke', 'HorseSemen', 'MegaBean', 'Iodine', 'MotorOil'], ['tp', 'el', 'cy', 'lf', 'ag', 'je', 'sl'], 34, 151, 117)
GreenCrack:
(15451418, 6, 'greenCrack', ['Paracetamol', 'MegaBean', 'MotorOil', 'Cuke', 'Battery', 'MegaBean'], ['ag', 'gl', 'zo', 'tt', 'cy', 'be', 'fo'], 33, 153, 120)
GrandaddyPurple:
(5750309, 6, 'grandaddyPurple', ['Cuke', 'EnergyDrink', 'MegaBean', 'Paracetamol', 'Chili', 'MouthWash'], ['tt', 'cy', 'lf', 'ag', 'be', 'sp', 'ba'], 29, 146, 117)
Meth:
(6161685, 6, 'meth', ['Cuke', 'Paracetamol', 'Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'tt', 'zo', 'cy', 'be', 'fo'], 27, 269, 242)
Coke:
(6161690, 6, 'coke', ['Cuke', 'Paracetamol', 'Gasoline', 'Cuke', 'Battery', 'MegaBean'], ['gl', 'tt', 'zo', 'cy', 'be', 'fo'], 27, 576, 549)

Coullis 7 items best Profit:
OGKush:
SourDiesel:
GreenCrack:
GrandaddyPurple:
Meth:
Coke:

Coullis 8 items best Profit:
OGKush:
SourDiesel:
GreenCrack:
GrandaddyPurple:
Meth:
Coke:

'''