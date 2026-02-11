//Fichier CPP pour les fonctions d'acquisition de donnée

#include "acquisition.h"

struct Acceleration {
    int x;
    int y;
    int z;
};

//Fonction pour init les pins pour les capteurs
void setupPinsCapteurs()
{
    setup.wire();
    //Init Pins Encodeurs volants
    pinMode(PIN_ENCODEUR1,INPUT);
    pinMode(PIN_ENCODEUR2,INPUT);

    //Init Pins Potentiomètre Joystick
    pinMode(PIN_JOYSTICKX,INPUT);
    pinMode(PIN_JOYSTICKY,INPUT);

    //Init Pins Accéléromètre (Peut-être à enlever)
    pinMode(PIN_ACCELEROX,INPUT);
    pinMode(PIN_ACCELEROY,INPUT);
    pinMode(PIN_ACCELEROZ,INPUT);

    //Init Pins Switches
    pinMode(SWITCH_1,INPUT);
    pinMode(SWITCH_2,INPUT);
    pinMode(SWITCH_3,INPUT);
    pinMode(SWITCH_4,INPUT);
}

Acceleration capterAccel()
{
    Acceleration accel;
    accel.x = digitalRead(PIN_ACCELEROX);
    accel.y = digitalRead(PIN_ACCELEROY);
    accel.z = digitalRead(PIN_ACCELEROZ);
    return accel;
}

