//Fichier CPP pour les fonctions d'acquisition de donnée

#include "acquisition.h"

struct Acceleration {
    float x;
    float y;
    float z;
};

//Fonction pour init les pins pour les capteurs
void setupPinsCapteurs()
{
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

//Fonction pour lire les accélérations des axes XYZ
Acceleration capterAccel()
{
    Acceleration accel;
    accel.x = analogRead(PIN_ACCELEROX);
    accel.y = analogRead(PIN_ACCELEROY);
    accel.z = analogRead(PIN_ACCELEROZ);
    return accel;
}

