#include <Arduino.h>
#include <Servo.h>

#define input_pin A0
Servo myservo;
int val;

void setup() {
  myservo.attach(3);
}

void loop() {
  val = analogRead(input_pin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  delay(15);
}
