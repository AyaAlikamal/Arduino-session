#include <Arduino.h>

int degree, input;

void setup() {

  Serial.begin(9600);
 Serial.println("Enter your degree:");
}

void loop() {
if (Serial.available()>0){
  degree = Serial.parseInt();
  switch (degree) {
    case 60:
      Serial.println("F");
      break;
    case 70:
      Serial.println("D");
      break;
    case 80:
      Serial.println("C");
      break;
    case 90:
      Serial.println("B");
      break;
    case 100:
      Serial.println("A");
      break;
  }
  }
}
