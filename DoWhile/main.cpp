#include <iostream>

int main() {
  int x = 10;
  int i = 0;
  do {
    i++;
    x--;
    std::cout << "X:  " << x << "\t"
              << "I:  " << i << std::endl;
  } while (x > 0);
  return 0;
}
