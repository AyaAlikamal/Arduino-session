#include <iostream>

struct TeamData {
  std::string name = "Torpedo";
  int year = 2014;
};

int main() {
  TeamData TD;
  std::cout << "Team name: " << TD.name << std::endl;
  std::cout << "Team Year: " << TD.year << std::endl;
  return 0;
}
