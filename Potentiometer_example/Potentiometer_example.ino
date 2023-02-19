#include <Arduino.h>

#define InputPin A5
#define OutputPin 5

float Inputvalue = 0;
float Outputvalue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(InputPin, INPUT);
  pinMode(OutputPin, OUTPUT);
}

void loop() {
  Inputvalue = analogRead(InputPin);
  Serial.print("pot value");
  Serial.println(Inputvalue);
  Outputvalue = map(Inputvalue, 0, 1023, 0, 255);
  analogWrite(OutputPin, Outputvalue);
  delay(1000);
}