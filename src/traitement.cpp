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
