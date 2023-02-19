#include <iostream>

int main() {
  int array[6];
  int Element = 0;
  int A = 0;
  for (int i = 0; i < 6; i++) {
    array[i] = Element;
    Element++;
  }
  for (int j = 0; j < 6; j++) {
    std::cout << "the elements of the array are: %d" << array[j];
  }
  return 0;
}