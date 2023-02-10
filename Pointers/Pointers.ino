#include <Arduino.h>
int x = 10, y = 20;
int*A = &x;
int*B = &y;
void setup() {
  Serial.begin(9600);
  SwapFunctio(A , B);
  Serial.print("X=");
  Serial.print(*A);
  Serial.print("y=");
  Serial.print(*B);
}

void loop() {
}

void SwapFunctio(int *n1, int *n2) {
  int temp = 0;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}