#include <Arduino.h>

#define InputPin 4
#define OutputPin 8

void setup() {
  pinMode(InputPin, INPUT);
  pinMode(OutputPin, OUTPUT);
}

void loop() {
  digitalRead(InputPin);
  if (digitalRead(InputPin) == 1) {
    digitalWrite(OutputPin, 1);
  } else {
    digitalWrite(OutputPin, 0);
  }
}
