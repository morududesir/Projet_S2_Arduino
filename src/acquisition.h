//Fichier d'entête pour les fonctions d'acquisition de données pour les capteurs du volant

#ifndef ACQUISITION_H
#define ACQUISITION_H

#include <arduino.h>
#include "Encoder.h"

const int PIN_ENCODEUR1 = 21;
const int PIN_ENCODEUR2 = 20;

const int PIN_JOYSTICKX = 0;
const int PIN_JOYSTICKY = 0;

const int PIN_ACCELEROX = A0;
const int PIN_ACCELEROY = A1;
const int PIN_ACCELEROZ = A2;

#endif 