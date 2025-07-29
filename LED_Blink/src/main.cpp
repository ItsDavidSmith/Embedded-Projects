#include <Arduino.h>

int powerPin = 30;
char blinkKey = ' ';

void setup() {
    Serial.begin(9600);
    while(Serial.available()>0){Serial.read();}
    pinMode(powerPin, OUTPUT);
}

void loop() {
    if(Serial.available()>0 && Serial.read()==blinkKey){
        digitalWrite(powerPin, HIGH);
        Serial.print("blink ;]\n");
        delay(500);
    }

    digitalWrite(powerPin, LOW);

}
