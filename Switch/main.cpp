#include <iostream>

int main() {
  int degree, input;
  std::cout << "Enter your degree:";
  std::cin >> degree;
  std::cout << "Enter your input:";
  std::cin >> input;

  switch (degree) {
    case 60:
      std::cout << "F" << std::endl;
      break;
    case 70:
      std::cout << "D" << std::endl;
      break;
    case 80:
      std::cout << "C" << std::endl;
      break;
    case 90:
      std::cout << "B" << std::endl;
      break;
    case 100:
      std::cout << "A" << std::endl;
      break;
    default:
      std::cout << "Invalid input" << std::endl;
      break;
  }
}