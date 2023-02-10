#include <Arduino.h>

float First_Num, Second_Num;
char Operation;
float Result = 0;
const char a = '+';
const char b = '-';
const char c = '*';
const char d = '/';

void setup() {
  Serial.begin(9600);
  Serial.println("Enter the equation you want");
}

void loop() {

  while (Serial.available() > 0) {
    First_Num = Serial.parseInt();
    Operation = Serial.read();
    Second_Num = Serial.parseInt();
    Serial.print("Result ");
    Serial.println(calculate());
  }
}
float calculate() {
  if (Operation == a) {
    Result = First_Num + Second_Num;
  } else if (Operation == b) {
    Result = First_Num - Second_Num;
  } else if (Operation == c) {
    Result = First_Num * Second_Num;
  } else if (Operation == d) {
      Result = First_Num / Second_Num;
    }
  return Result;
}
