#include "traitement.h"

uint8_t traitementJoystick() {
    Joystick val = capterJoy();
    if (val.y > joy_mid + joy_deadzone) {
        return 0b001; //Haut
    } else if (val.y < joy_mid - joy_deadzone) {
        return 0b010; //Bas
    } else if (val.x > joy_mid + joy_deadzone) {
        return 0b011; //Gauche
    } else if (val.x < joy_mid - joy_deadzone) {
        return 0b100; //Droite
    } else {
        return 0b000;
    }

}


float traitement_acceleration()
{
    //Initialisation variables
    float ratio_V_en_G = 0.3;
    Acceleration acc_en_g = capterAccel();
    float XYZ[3] = {acc_en_g.x,acc_en_g.y,acc_en_g.z}; //Extraction valeurs accel XYZ
    float XYZ_en_g[3];
    int i;
    Direction direction;

    //Conversion V en g
    for(i=0;i<sizeof(XYZ);i++){
        if(XYZ[i]<1.45 && XYZ[i]>1.65){
            XYZ_en_g[i] = (XYZ[i]-V_0g)/ratio_V_en_G;
        }
        else{
            XYZ[i] = 0.0;
        }
    }

    //Détection direction accelération
    if(XYZ[0]>0 && XYZ[1)




}
