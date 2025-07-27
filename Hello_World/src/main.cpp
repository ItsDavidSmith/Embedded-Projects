#include <Arduino.h>

int ledPin = 13;
char greetKey = 'R';

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  while(Serial.available() < 0){
    Serial.read();
  }
}

void loop(){
  if(Serial.available() > 0 && Serial.read() == greetKey){ // will not read first available char if none available 
    digitalWrite(ledPin, HIGH);
    Serial.print("Hallooooo\n");
    delay(300);
  }
  digitalWrite(ledPin, LOW);
  delay(200);
}