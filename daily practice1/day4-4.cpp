#include <iostream>

union my_data {
  int integer;
  float floating_point;
};

int main() {
  my_data data;
  std::cout << "Please enter a number: ";
  if (std::cin >> data.integer) {
    std::cout << "You entered an integer: " << data.integer << std::endl;
  } else {
    std::cin.clear();
    std::cin >> data.floating_point;
    std::cout << "You entered a floating-point number: " << data.floating_point << std::endl;
  }
  return 0;
}

