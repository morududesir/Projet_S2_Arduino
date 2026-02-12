//Fichier CPP pour les fonctions d'acquisition de donnée

#include "acquisition.h"

Encoder EncodeurGauche(PIN_ENCODEUR1A,PIN_ENCODEUR1B);
Encoder EncodeurDroite(PIN_ENCODEUR2A,PIN_ENCODEUR2B);

//Fonction pour init les pins pour les capteurs
void setupCapteurs()
{
    //Init Pins Encodeurs volants
    pinMode(PIN_ENCODEUR1A,INPUT);
    pinMode(PIN_ENCODEUR1B,INPUT);
    pinMode(PIN_ENCODEUR2A,INPUT);
    pinMode(PIN_ENCODEUR2B,INPUT);

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

Encodeur capterEncodeurs() {

    Encodeur encode;
    encode.valeurGauche = EncodeurGauche.read();
    encode.valeurDroite = EncodeurDroite.read();
    return encode;
}

Joystick capterJoy()
{
    Joystick joy;
    joy.x = analogRead(PIN_JOYSTICKX);
    joy.y = analogRead(PIN_JOYSTICKY);
    return joy;
}

    