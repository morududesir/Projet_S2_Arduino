

#include <Arduino.h>
#include "acquisition.h"
#include "traitement.h"


/*
//Pins

//Accelerometer
#define accX A0
#define accZ A1
#define accY A2

//OLED
#define SDA_OLED 51
#define SCLK_OLED 52
#define DC_OLED 48
#define RST_OLED 49
#define CS_OLED 47

//Encoder
//1
#define encA 21
#define encB 20

//2

//3-Base
#define encA3 19
#define encB3 18

//Switch
#define sw1 9
#define sw2 8
#define sw3 7
#define sw4 6

//LED
#define led1 5
#define led2 4
#define bargraph 10
*/


void setup() {
  Serial.begin(9600);
}

void loop() {
  uint8_t val = traitementJoystick();
  Serial.println(val, BIN);
  delay(500);
}

