//Fichier d'entête pour les fonctions d'acquisition de données pour les capteurs du volant

#ifndef TRAITEMENT_H
#define TRAITEMENT_H

#include "acquisition.h"

uint8_t traitementJoystick();

const int joy_deadzone = 50;
const int joy_mid = 512;

const float V_0g = 1.5; //Min 0g

const float ratio_V_en_g = (1.95/1)

#endif