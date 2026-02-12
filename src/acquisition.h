//Fichier d'entête pour les fonctions d'acquisition de données pour les capteurs du volant

#ifndef ACQUISITION_H
#define ACQUISITION_H

#include <arduino.h>
#include <Encoder.h>

//Structure pour les valeurs de retour d'accélération
struct Acceleration {
    float x;
    float y;
    float z;
};


//Pins Encodeur
const int PIN_ENCODEUR1 = 21;
const int PIN_ENCODEUR2 = 20;

//Pins Joystick
const int PIN_JOYSTICKX = 0;
const int PIN_JOYSTICKY = 0;

//Pins Accéléromètre
const int PIN_ACCELEROX = A0;
const int PIN_ACCELEROY = A1;
const int PIN_ACCELEROZ = A2;

//Pins Switch
const int SWITCH_1 = 9;
const int SWITCH_2 = 8;
const int SWITCH_3 = 7;
const int SWITCH_4 = 6;

//Fonction Init Pins
void setupPinsCapteurs();

//Fonction pour capter les valeurs d'accélération XYZ
Acceleration capterAccel();

#endif 