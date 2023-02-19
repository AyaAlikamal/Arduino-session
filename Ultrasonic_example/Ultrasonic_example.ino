#include <Arduino.h>

#define PingPin 3

long duration;
float distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pinMode(PingPin, OUTPUT);
  digitalWrite(PingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(PingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(PingPin, LOW);
  pinMode(PingPin, INPUT);
  duration = pulseIn(PingPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
