//gcc MixCalculatorV3.c -o MixCalculatorV3; ./MixCalculatorV3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

typedef struct {
    int* currentEffects;
    int effectCounter;
} EffectResult;

EffectResult addCuke(int effectCounter, int *currentEffects);
EffectResult addFluMedicine(int effectCounter, int *currentEffects);
EffectResult addGasoline(int effectCounter, int *currentEffects);
EffectResult addDonut(int effectCounter, int *currentEffects);
EffectResult addEnergyDrink(int effectCounter, int *currentEffects);
EffectResult addMouthWash(int effectCounter, int *currentEffects);
EffectResult addMotorOil(int effectCounter, int *currentEffects);
EffectResult addBanana(int effectCounter, int *currentEffects);
EffectResult addChili(int effectCounter, int *currentEffects);
EffectResult addIodine(int effectCounter, int *currentEffects);
EffectResult addParacetamol(int effectCounter, int *currentEffects);
EffectResult addViagra(int effectCounter, int *currentEffects);
EffectResult addHorseSemen(int effectCounter, int *currentEffects);
EffectResult addMegaBean(int effectCounter, int *currentEffects);
EffectResult addAddy(int effectCounter, int *currentEffects);
EffectResult addBattery(int effectCounter, int *currentEffects);

typedef EffectResult (*EffectFunction)(int, int*);
EffectFunction functions[16] = {addCuke, addFluMedicine, addGasoline, addDonut, addEnergyDrink, addMouthWash, addMotorOil, addBanana, addChili, addIodine, addParacetamol, addViagra, addHorseSemen, addMegaBean, addAddy, addBattery};
const char *functionNames[16] = {"addCuke", "addFluMedicine", "addGasoline", "addDonut", "addEnergyDrink", "addMouthWash", "addMotorOil", "addBanana", "addChili", "addIodine", "addParacetamol", "addViagra", "addHorseSemen", "addMegaBean", "addAddy", "addBattery"};

bool effectExists(int *effects, int count, int value) {
    for (int i = 0; i < count; i++) {
        if (effects[i] == value) {
            return true;
        }
    }
    return false;
}

EffectResult addCuke(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 33:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 13:
                if (!effectExists(currentEffects, effectCounter, 24)) {
                    currentEffects[i] = 24;
                }
                break;
            case 18:
                if (!effectExists(currentEffects, effectCounter, 29)) {
                    currentEffects[i] = 29;
                }
                break;
            case 12:
                if (!effectExists(currentEffects, effectCounter, 2)) {
                    currentEffects[i] = 2;
                }
                break;
            case 20:
                if (!effectExists(currentEffects, effectCounter, 8)) {
                    currentEffects[i] = 8;
                }
                break;
            case 24:
                if (!effectExists(currentEffects, effectCounter, 14)) {
                    currentEffects[i] = 14;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 28)) {
                    currentEffects[i] = 28;
                }
                break;
            case 19:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        // Only add the new effect if it's not already present
        if (!effectExists(currentEffects, effectCounter, 19)) {
            currentEffects[effectCounter++] = 19;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addFluMedicine(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 25:
                if (!effectExists(currentEffects, effectCounter, 10)) {
                    currentEffects[i] = 10;
                }
                break;
            case 14:
                if (!effectExists(currentEffects, effectCounter, 24)) {
                    currentEffects[i] = 24;
                }
                break;
            case 8:
                if (!effectExists(currentEffects, effectCounter, 20)) {
                    currentEffects[i] = 20;
                }
                break;
            case 2:
                if (!effectExists(currentEffects, effectCounter, 12)) {
                    currentEffects[i] = 12;
                }
                break;
            case 24:
                if (!effectExists(currentEffects, effectCounter, 13)) {
                    currentEffects[i] = 13;
                }
                break;
            case 28:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 33)) {
                    currentEffects[i] = 33;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 25)) {
                    currentEffects[i] = 25;
                }
                break;
            case 5:
                if (!effectExists(currentEffects, effectCounter, 23)) {
                    currentEffects[i] = 23;
                }
                break;
            case 0:
                if (!effectExists(currentEffects, effectCounter, 29)) {
                    currentEffects[i] = 29;
                }
                break;
            case 17:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 17)) {
            currentEffects[effectCounter++] = 17;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addGasoline(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 20:
                if (!effectExists(currentEffects, effectCounter, 32)) {
                    currentEffects[i] = 32;
                }
                break;
            case 9:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 18:
                if (!effectExists(currentEffects, effectCounter, 7)) {
                    currentEffects[i] = 7;
                }
                break;
            case 24:
                if (!effectExists(currentEffects, effectCounter, 17)) {
                    currentEffects[i] = 17;
                }
                break;
            case 19:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 19)) {
                    currentEffects[i] = 19;
                }
                break;
            case 28:
                if (!effectExists(currentEffects, effectCounter, 12)) {
                    currentEffects[i] = 12;
                }
                break;
            case 26:
                if (!effectExists(currentEffects, effectCounter, 6)) {
                    currentEffects[i] = 6;
                }
                break;
            case 29:
                if (!effectExists(currentEffects, effectCounter, 25)) {
                    currentEffects[i] = 25;
                }
                break;
            case 5:
                if (!effectExists(currentEffects, effectCounter, 26)) {
                    currentEffects[i] = 26;
                }
                break;
            case 0:
                if (!effectExists(currentEffects, effectCounter, 22)) {
                    currentEffects[i] = 22;
                }
                break;
            case 33:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 33)) {
            currentEffects[effectCounter++] = 33;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addDonut(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 16:
                if (!effectExists(currentEffects, effectCounter, 27)) {
                    currentEffects[i] = 27;
                }
                break;
            case 15:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 3:
                if (!effectExists(currentEffects, effectCounter, 13)) {
                    currentEffects[i] = 13;
                }
                break;
            case 9:
                if (!effectExists(currentEffects, effectCounter, 20)) {
                    currentEffects[i] = 20;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 0:
                if (!effectExists(currentEffects, effectCounter, 19)) {
                    currentEffects[i] = 19;
                }
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 16)) {
            currentEffects[effectCounter++] = 16;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addEnergyDrink(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 17:
                if (!effectExists(currentEffects, effectCounter, 24)) {
                    currentEffects[i] = 24;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 19)) {
                    currentEffects[i] = 19;
                }
                break;
            case 11:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 7:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 6:
                if (!effectExists(currentEffects, effectCounter, 26)) {
                    currentEffects[i] = 26;
                }
                break;
            case 12:
                if (!effectExists(currentEffects, effectCounter, 28)) {
                    currentEffects[i] = 28;
                }
                break;
            case 26:
                if (!effectExists(currentEffects, effectCounter, 5)) {
                    currentEffects[i] = 5;
                }
                break;
            case 30:
                if (!effectExists(currentEffects, effectCounter, 15)) {
                    currentEffects[i] = 15;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 0)) {
                    currentEffects[i] = 0;
                }
                break;
            case 14:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 14)) {
            currentEffects[effectCounter++] = 14;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addMouthWash(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 25:
                if (!effectExists(currentEffects, effectCounter, 3)) {
                    currentEffects[i] = 3;
                }
                break;
            case 16:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 27:
                if (!effectExists(currentEffects, effectCounter, 17)) {
                    currentEffects[i] = 17;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 9)) {
                    currentEffects[i] = 9;
                }
                break;
            case 15:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 15)) {
            currentEffects[effectCounter++] = 15;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addMotorOil(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 19:
                if (!effectExists(currentEffects, effectCounter, 24)) {
                    currentEffects[i] = 24;
                }
                break;
            case 12:
                if (!effectExists(currentEffects, effectCounter, 33)) {
                    currentEffects[i] = 33;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 17)) {
                    currentEffects[i] = 17;
                }
                break;
            case 29:
                if (!effectExists(currentEffects, effectCounter, 3)) {
                    currentEffects[i] = 3;
                }
                break;
            case 24:
                if (!effectExists(currentEffects, effectCounter, 30)) {
                    currentEffects[i] = 30;
                }
                break;
            case 13:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 13)) {
            currentEffects[effectCounter++] = 13;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addBanana(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 19:
                if (!effectExists(currentEffects, effectCounter, 8)) {
                    currentEffects[i] = 8;
                }
                break;
            case 25:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 33:
                if (!effectExists(currentEffects, effectCounter, 32)) {
                    currentEffects[i] = 32;
                }
                break;
            case 4:
                if (!effectExists(currentEffects, effectCounter, 23)) {
                    currentEffects[i] = 23;
                }
                break;
            case 2:
                if (!effectExists(currentEffects, effectCounter, 8)) {
                    currentEffects[i] = 8;
                }
                break;
            case 26:
                if (!effectExists(currentEffects, effectCounter, 22)) {
                    currentEffects[i] = 22;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 31)) {
                    currentEffects[i] = 31;
                }
                break;
            case 29:
                if (!effectExists(currentEffects, effectCounter, 9)) {
                    currentEffects[i] = 9;
                }
                break;
            case 32:
                if (!effectExists(currentEffects, effectCounter, 3)) {
                    currentEffects[i] = 3;
                }
                break;
            case 20:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 20)) {
            currentEffects[effectCounter++] = 20;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addChili(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 14:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 3:
                if (!effectExists(currentEffects, effectCounter, 7)) {
                    currentEffects[i] = 7;
                }
                break;
            case 18:
                if (!effectExists(currentEffects, effectCounter, 10)) {
                    currentEffects[i] = 10;
                }
                break;
            case 24:
                if (!effectExists(currentEffects, effectCounter, 33)) {
                    currentEffects[i] = 33;
                }
                break;
            case 28:
                if (!effectExists(currentEffects, effectCounter, 4)) {
                    currentEffects[i] = 4;
                }
                break;
            case 0:
                if (!effectExists(currentEffects, effectCounter, 23)) {
                    currentEffects[i] = 23;
                }
                break;
            case 11:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 11)) {
            currentEffects[effectCounter++] = 11;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addIodine(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 25:
                if (!effectExists(currentEffects, effectCounter, 15)) {
                    currentEffects[i] = 15;
                }
                break;
            case 33:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 12:
                if (!effectExists(currentEffects, effectCounter, 29)) {
                    currentEffects[i] = 29;
                }
                break;
            case 16:
                if (!effectExists(currentEffects, effectCounter, 20)) {
                    currentEffects[i] = 20;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 31)) {
                    currentEffects[i] = 31;
                }
                break;
            case 23:
                if (!effectExists(currentEffects, effectCounter, 8)) {
                    currentEffects[i] = 8;
                }
                break;
            case 9:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 9)) {
            currentEffects[effectCounter++] = 9;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addParacetamol(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 19:
                if (!effectExists(currentEffects, effectCounter, 29)) {
                    currentEffects[i] = 29;
                }
                break;
            case 25:
                if (!effectExists(currentEffects, effectCounter, 13)) {
                    currentEffects[i] = 13;
                }
                break;
            case 33:
                if (!effectExists(currentEffects, effectCounter, 7)) {
                    currentEffects[i] = 7;
                }
                break;
            case 11:
                if (!effectExists(currentEffects, effectCounter, 10)) {
                    currentEffects[i] = 10;
                }
                break;
            case 6:
                if (!effectExists(currentEffects, effectCounter, 33)) {
                    currentEffects[i] = 33;
                }
                break;
            case 12:
                if (!effectExists(currentEffects, effectCounter, 25)) {
                    currentEffects[i] = 25;
                }
                break;
            case 24:
                if (!effectExists(currentEffects, effectCounter, 3)) {
                    currentEffects[i] = 3;
                }
                break;
            case 29:
                if (!effectExists(currentEffects, effectCounter, 15)) {
                    currentEffects[i] = 15;
                }
                break;
            case 5:
                if (!effectExists(currentEffects, effectCounter, 14)) {
                    currentEffects[i] = 14;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 20)) {
                    currentEffects[i] = 20;
                }
                break;
            case 18:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 18)) {
            currentEffects[effectCounter++] = 18;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addViagra(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 14:
                if (!effectExists(currentEffects, effectCounter, 18)) {
                    currentEffects[i] = 18;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 10)) {
                    currentEffects[i] = 10;
                }
                break;
            case 28:
                if (!effectExists(currentEffects, effectCounter, 25)) {
                    currentEffects[i] = 25;
                }
                break;
            case 26:
                if (!effectExists(currentEffects, effectCounter, 33)) {
                    currentEffects[i] = 33;
                }
                break;
            case 7:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 7)) {
            currentEffects[effectCounter++] = 7;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addHorseSemen(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 3:
                if (!effectExists(currentEffects, effectCounter, 25)) {
                    currentEffects[i] = 25;
                }
                break;
            case 20:
                if (!effectExists(currentEffects, effectCounter, 23)) {
                    currentEffects[i] = 23;
                }
                break;
            case 8:
                if (!effectExists(currentEffects, effectCounter, 5)) {
                    currentEffects[i] = 5;
                }
                break;
            case 4:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 4)) {
            currentEffects[effectCounter++] = 4;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addMegaBean(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 25:
                if (!effectExists(currentEffects, effectCounter, 6)) {
                    currentEffects[i] = 6;
                }
                break;
            case 9:
                if (!effectExists(currentEffects, effectCounter, 29)) {
                    currentEffects[i] = 29;
                }
                break;
            case 14:
                if (!effectExists(currentEffects, effectCounter, 28)) {
                    currentEffects[i] = 28;
                }
                break;
            case 13:
                if (!effectExists(currentEffects, effectCounter, 33)) {
                    currentEffects[i] = 33;
                }
                break;
            case 8:
                if (!effectExists(currentEffects, effectCounter, 2)) {
                    currentEffects[i] = 2;
                }
                break;
            case 31:
                if (!effectExists(currentEffects, effectCounter, 22)) {
                    currentEffects[i] = 22;
                }
                break;
            case 22:
                if (!effectExists(currentEffects, effectCounter, 26)) {
                    currentEffects[i] = 26;
                }
                break;
            case 18:
                if (!effectExists(currentEffects, effectCounter, 25)) {
                    currentEffects[i] = 25;
                }
                break;
            case 0:
                if (!effectExists(currentEffects, effectCounter, 5)) {
                    currentEffects[i] = 5;
                }
                break;
            case 19:
                if (!effectExists(currentEffects, effectCounter, 2)) {
                    currentEffects[i] = 2;
                }
                break;
            case 12:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 12)) {
            currentEffects[effectCounter++] = 12;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addAddy(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 17:
                if (!effectExists(currentEffects, effectCounter, 20)) {
                    currentEffects[i] = 20;
                }
                break;
            case 4:
                if (!effectExists(currentEffects, effectCounter, 5)) {
                    currentEffects[i] = 5;
                }
                break;
            case 6:
                if (!effectExists(currentEffects, effectCounter, 23)) {
                    currentEffects[i] = 23;
                }
                break;
            case 12:
                if (!effectExists(currentEffects, effectCounter, 19)) {
                    currentEffects[i] = 19;
                }
                break;
            case 27:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 8:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 8)) {
            currentEffects[effectCounter++] = 8;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

EffectResult addBattery(int effectCounter, int *currentEffects) {
    bool addOwnEffect = true;
    int originalCount = effectCounter;

    for (int i = 0; i < originalCount; i++) {
        switch(currentEffects[i]) {
            case 24:
                if (!effectExists(currentEffects, effectCounter, 7)) {
                    currentEffects[i] = 7;
                }
                break;
            case 21:
                if (!effectExists(currentEffects, effectCounter, 1)) {
                    currentEffects[i] = 1;
                }
                break;
            case 5:
                if (!effectExists(currentEffects, effectCounter, 21)) {
                    currentEffects[i] = 21;
                }
                break;
            case 28:
                if (!effectExists(currentEffects, effectCounter, 16)) {
                    currentEffects[i] = 16;
                }
                break;
            case 2:
                if (!effectExists(currentEffects, effectCounter, 6)) {
                    currentEffects[i] = 6;
                }
                break;
            case 0:
                if (!effectExists(currentEffects, effectCounter, 24)) {
                    currentEffects[i] = 24;
                }
                break;
            case 10:
                addOwnEffect = false;
                break;
            default:
                break;
        }
    }

    if (addOwnEffect && effectCounter < 8) {
        if (!effectExists(currentEffects, effectCounter, 10)) {
            currentEffects[effectCounter++] = 10;
        }
    }

    return (EffectResult){currentEffects, effectCounter};
}

typedef struct {
    int combo[8];
    int finalEffects[8];
    int comboLength;
    int effectCounter;
    int cost;
    double sellPrice;
    double profit;
} BestResult;

void generateCombos(int *combo, int depth, int spots, int effectCounter, int *initialEffects, int basePrice, BestResult *best) {
    double effectPrices[34] = {
        0.60, 0.58, 0.56, 0.54, 0.52, 0.50, 0.48, 0.46,
        0.44, 0.42, 0.40, 0.38, 0.36, 0.34, 0.32, 0.30,
        0.28, 0.26, 0.24, 0.22, 0.20, 0.18, 0.16, 0.14,
        0.12, 0.10, 0, 0, 0, 0, 0, 0, 0, 0
    };

    if (depth == spots) {
        int currentEffects[8];
        memcpy(currentEffects, initialEffects, sizeof(int) * effectCounter);
        int cost = 0;
        int itemCosts[] = {2, 5, 5, 3, 6, 4, 6, 2, 7, 8, 3, 4, 9, 7, 9, 8};
        for (int i = 0; i < spots; i++) {
            EffectResult result = functions[combo[i]](effectCounter, currentEffects);
            effectCounter = result.effectCounter;
            memcpy(currentEffects, result.currentEffects, sizeof(int) * effectCounter);
            cost += itemCosts[combo[i]];
        }

        double valueSum = 0.0;
        for (int i = 0; i < effectCounter; i++) {
            int effect = currentEffects[i];
            if (effect >= 0 && effect < 34) {
                valueSum += effectPrices[effect];
            }
        }

        double sellPrice = round(basePrice * (1 + valueSum));
        double profit = sellPrice - cost;

        if (profit > best->profit) {
            memcpy(best->combo, combo, sizeof(int) * spots);
            memcpy(best->finalEffects, currentEffects, sizeof(int) * effectCounter);
            best->comboLength = spots;
            best->effectCounter = effectCounter;
            best->cost = cost;
            best->sellPrice = sellPrice;
            best->profit = profit;
        }
        return;
    }

    for (int i = 0; i < 16; i++) {
        combo[depth] = i;
        generateCombos(combo, depth + 1, spots, effectCounter, initialEffects, basePrice, best);
    }
}

int main() {
    int prod, spots, basePrice;
    int effectCounter = 0;
    int initialEffects[8] = {0};

    printf("Choose base product (OGKush:1, SourDiesel:2, GreenCrack:3, GrandaddyPurple:4, Meth:5, Coke:6): ");
    scanf("%d", &prod);
    printf("Choose item count: ");
    scanf("%d", &spots);

    switch(prod){
        case 1: effectCounter++; initialEffects[0] = 25; basePrice = 35; break;
        case 2: effectCounter++; initialEffects[0] = 23; basePrice = 35; break;
        case 3: effectCounter++; initialEffects[0] = 19; basePrice = 35; break;
        case 4: effectCounter++; initialEffects[0] = 17; basePrice = 35; break;
        case 5: basePrice = 70; break;
        case 6: basePrice = 150; break;
        default: printf("Invalid input\n"); return 1;
    }

    clock_t start, end;
    double cpu_time_used;
    start = clock();

    int combo[8]; // max of 8 items
    BestResult best = {.profit = -1};

    generateCombos(combo, 0, spots, effectCounter, initialEffects, basePrice, &best);

    printf("\nBest Combo:\n[");
    for (int i = 0; i < best.comboLength; i++) {
        printf("%s", functionNames[best.combo[i]]);
        if (i < best.comboLength - 1) printf(", ");
    }
    printf("] -> Effects: ");
    for (int i = 0; i < best.effectCounter; i++) {
        printf("%d ", best.finalEffects[i]);
    }
    printf("| Cost: %d | Sell Price: %.0f | Profit: %.0f\n", best.cost, best.sellPrice, best.profit);

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}