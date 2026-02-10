//Fichier d'entête pour les fonctions d'acquisition de données pour les capteurs du volant

#ifndef ACQUISITION_H
#define ACQUISTION_H

#include <Arduino.h>

const int PIN_POTENTIO1 = 21;
const int PIN_POTENTIO2 = 20;
const int PIN_JOYSTICKX = 0;
const int PIN_JOYSTICKY = 0;
const int PIN_ACCELEROX = A0;
const int PIN_ACCELEROY = A1;
const int PIN_ACCELEROZ = A2;

void setup()
{
    pinMode(PIN_POTENTIO1,INPUT);
    pinMode(PIN_POTENTIO2,INPUT);
    pinMode(PIN_JOYSTICKX,INPUT);
    pinMode(PIN_JOYSTICKY,INPUT);
    pinMode(PIN_ACCELEROX,INPUT);
    pinMode(PIN_ACCELEROY,INPUT);
    pinMode(PIN_ACCELEROZ,INPUT);
}

#endif 