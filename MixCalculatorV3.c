/*
gcc MixCalculatorV3.c -o MixCalculatorV3; ./MixCalculatorV3

1: Cuke
2: FluMedicine
3: Gasoline
4: Donut
5: EnergyDrink
6: Mouthwash
7: MotorOil
8: Banana
9: Chili
10: Iodine
11: Paracetamol
12: Viagra
13: HorseSemena
14:MegaBean
15:Addy
16:Battery

0: 'sh' : 0.60,
1: 'zo' : 0.58,  
2: 'cy' : 0.56,
3: 'ag' : 0.54,
4: 'lf' : 0.52,
5: 'el' : 0.50,
6: 'gl' : 0.48,
7: 'tt' : 0.46,
8: 'tp' : 0.44,
9: 'je' : 0.42,
10: 'be' : 0.40,
11: 'sp' : 0.38,
12: 'fo' : 0.36,
13: 'sl' : 0.34,
14: 'at' : 0.32,
15: 'ba' : 0.30,
16: 'cd' : 0.28,
17: 'se' : 0.26,
18: 'sn' : 0.24,
19: 'en' : 0.22,
20: 'gi' : 0.20,
21: 'eu' : 0.18,
22: 'fc' : 0.16,
23: 're' : 0.14,
24: 'mu' : 0.12,
25: 'ca' : 0.10,
26: 'di' : 0,
27: 'ex' : 0,
28: 'la' : 0,
29: 'pa' : 0,
30: 'sc' : 0,
31: 'si' : 0,
32: 'sm' : 0,
33: 'to' : 0

*/
#include <stdio.h>



int main(){
    int prod, currentEffects[8], itemCount, effectCounter=0, basePrice;
    float effects[] = {
        0.60, 0.58, 0.56, 0.54, 0.52, 0.50, 0.48, 0.46,
        0.44, 0.42, 0.40, 0.38, 0.36, 0.34, 0.32, 0.30,
        0.28, 0.26, 0.24, 0.22, 0.20, 0.18, 0.16, 0.14,
        0.12, 0.10, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
        0.00, 0.00
    };

    printf("Choose base product (OGKush:1, SourDiesel:2, GreenCrack:3, GrandaddyPurple:4, Meth:5, Coke:6): ");
    scanf("%d", &prod);
    printf("Choose item count: ");
    scanf("%d", &itemCount);

    switch (prod)
    {
    case 1:
        effectCounter++;
        currentEffects[1] = effects[25];
        basePrice = 35;
        break;
    case 2:
        effectCounter++;
        currentEffects[1] = effects[23];
        basePrice = 35;
        break;
    case 3:
        effectCounter++;
        currentEffects[1] = effects[19];
        basePrice = 35;
        break;
    case 4:
        effectCounter++;
        currentEffects[1] = effects[17];
        basePrice = 35;
        break;
    case 5:
        effectCounter++;
        currentEffects[1] = effects[17];
        basePrice = 70;
        break;
    case 6:
        effectCounter++;
        currentEffects[1] = effects[17];
        basePrice = 150;
        break;
    
    default:
        printf("Poson askisimos pezei na eisai?");
        break;
    }
    
    
    
    return 0;
}