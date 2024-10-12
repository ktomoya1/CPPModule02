#include <iostream>

#include "Fixed.h"

int main(void) {
  Fixed a(2000);
  Fixed const b(0);
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << a + b << std::endl;
  std::cout << a - b << std::endl;
  std::cout << a * b << std::endl;
  std::cout << a / b << std::endl;
  return 0;
}
