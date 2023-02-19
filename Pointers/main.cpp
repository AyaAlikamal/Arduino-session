#include <iostream>

void swap(int *n1, int *n2) {
  int temp = 0;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

int main() {
  int x = 10, y = 20;
  int *A = &x;
  int *B = &y;
  std::cout << "x: " << *A << std::endl;
  std::cout << "y: " << *B << std::endl;
  swap(A, B);
  std::cout << "x: " << *A << std::endl;
  std::cout << "y: " << *B << std::endl;
}
