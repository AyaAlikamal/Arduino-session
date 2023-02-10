#include <Arduino.h>
#define Led_1 2
#define Led_2 3
#define Led_3 4
#define Input_pin_1 9
#define Input_pin_2 8

void setup() {
  Serial.begin(9600);
  pinMode(Led_1, OUTPUT);
  pinMode(Led_2, OUTPUT);
  pinMode(Led_3, OUTPUT);
  pinMode(Input_pin_1, INPUT);
  pinMode(Input_pin_2, INPUT);
}

void loop() {

  if (digitalRead(Input_pin_1) == 1) {
    while (true) {

      digitalWrite(Led_1, 1);
      digitalWrite(Led_2, 0);
      digitalWrite(Led_3, 0);

      delay(3000);

      digitalWrite(Led_1, 0);
      digitalWrite(Led_2, 1);
      digitalWrite(Led_3, 0);

      delay(3000);

      digitalWrite(Led_1, 0);
      digitalWrite(Led_2, 0);
      digitalWrite(Led_3, 1);

      delay(3000);
    }
  }
}
