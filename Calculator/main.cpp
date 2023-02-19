#include <iostream>

float First_Num, Second_Num;
char Operation;
float Result = 0;
const char a = '+';
const char b = '-';
const char c = '*';
const char d = '/';

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

int main() {
  std::cout << "Enter the equation you want" << std::endl;
  std::cin >> First_Num >> Operation >> Second_Num;
  std::cout << "Result " << calculate() << std::endl;
  return 0;
}
