#include <Arduino.h>
int array[6];
int Element = 0;
int A = 0;
void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 6; i++) {
    array[i] = Element;
    Element++;
  }
  for (int j = 0; j < 6; j++) {
    Serial.print("the elements of the array are: ");
    Serial.print(array[j]);
    Serial.println();
  }
}

void loop() {
}
