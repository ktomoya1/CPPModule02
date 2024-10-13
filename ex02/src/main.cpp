#include <iostream>
#include <climits>

#include "Fixed.h"

int main(void) {
  Fixed a(-1);
  Fixed const b(-1);
  Fixed c(1.5f);
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "a + b: " << a + b << std::endl;
  std::cout << "a - b: " << a - b << std::endl;
  std::cout << "a * b: " << a * b << std::endl;
  std::cout << "a / b: " << a / b << std::endl;
  std::cout << "a + c: " << a + c << std::endl;
  std::cout << "a - c: " << a - c << std::endl;
  std::cout << "a * c: " << a * c << std::endl;
  std::cout << "a / c: " << a / c << std::endl;
  return 0;
}
