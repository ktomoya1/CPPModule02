#include <iostream>
#include <climits>

#include "Fixed.h"

int main(void) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max( a, b ) << std::endl;
  return 0;
}

//int main(void) {
//  Fixed a(-1);
//  Fixed const b(-1);
//  Fixed c(1.5f);
//  std::cout << "a: " << a << std::endl;
//  std::cout << "b: " << b << std::endl;
//  std::cout << "c: " << c << std::endl;
//  std::cout << "a + b: " << a + b << std::endl;
//  std::cout << "a - b: " << a - b << std::endl;
//  std::cout << "a * b: " << a * b << std::endl;
//  std::cout << "a / b: " << a / b << std::endl;
//  std::cout << "a + c: " << a + c << std::endl;
//  std::cout << "a - c: " << a - c << std::endl;
//  std::cout << "a * c: " << a * c << std::endl;
//  std::cout << "a / c: " << a / c << std::endl;
//  return 0;
//}
