#include <Arduino.h>
#include <string.h>

struct TeamData{
String Name = "Torpedo";
int Year = 2014;
} ;

void setup() {
TeamData TD;
  Serial.begin(9600);
  Serial.print("Team name: ");
Serial.println(TD.Name);
Serial.print("Team Year: ");
Serial.println(TD.Year);
}

void loop() {
}
