#include "Arduino.h"

unsigned long time;

void setup()
{
    //D0~D7 is Output
    DDRD=B11111111;
    
    Serial.begin(9600);
}

void loop()
{
    //time=millis();
    PORTD=millis()/1000;
    Serial.println(millis()/1000);
    delay(1000);
}