#include <Arduino.h>
int x = 10;
int i = 0;
void setup() {

  Serial.begin(9600);
    do {
    i++;
    x--;
    Serial.print("X:  ");
    Serial.print(x);
    Serial.print("\t");
    Serial.print("I:  ");
    Serial.println(i);
  } while (x > 0);
}
void loop() {

}
