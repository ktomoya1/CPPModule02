#include "Fixed.h"

#include <iostream>
#include <climits>

//int main(void) {
//  Fixed a;
//  Fixed const b(Fixed(5.05f) * Fixed(2));
//
//  std::cout << a << std::endl;
//  std::cout << ++a << std::endl;
//  std::cout << a << std::endl;
//  std::cout << a++ << std::endl;
//  std::cout << a << std::endl;
//  std::cout << b << std::endl;
//  std::cout << Fixed::max(a, b) << std::endl;
//  return 0;
//}

// 比較演算子のテスト
//int main(void) {
//  Fixed a(10);
//  Fixed b(20);
//  Fixed c(10);
//
//  std::cout << "a: " << a << std::endl;
//  std::cout << "b: " << b << std::endl;
//  std::cout << "c: " << c << std::endl;
//
//  std::cout << "a < b is ";
//  if (a < b) {
//    std::cout << "true" << std::endl;
//  } else {
//    std::cout << "false" << std::endl;
//  }
//
//  std::cout << "a > b is ";
//  if (a > b) {
//    std::cout << "true" << std::endl;
//  } else {
//    std::cout << "false" << std::endl;
//  }
//
//  std::cout << "a == c is ";
//  if (a == c) {
//    std::cout << "true" << std::endl;
//  } else {
//    std::cout << "false" << std::endl;
//  }
//
//  std::cout << "a >= c is ";
//  if (a >= c) {
//    std::cout << "true" << std::endl;
//  } else {
//    std::cout << "false" << std::endl;
//  }
//
//  std::cout << "b <= c is ";
//  if (b <= c) {
//    std::cout << "true" << std::endl;
//  } else {
//    std::cout << "false" << std::endl;
//  }
//
//  std::cout << "b != c is ";
//  if (b != c) {
//    std::cout << "true" << std::endl;
//  } else {
//    std::cout << "false" << std::endl;
//  }
//  return 0;
//}

// 算術演算子のテスト
//int main(void) {
//  Fixed a(-1);
//  Fixed const b(-1);
//  Fixed c(1.5f);
//
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

// min_maxのテスト
int main(void) {
  Fixed a(10.5f);
  Fixed b(20.25f);
  Fixed c(15.75f);

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;

  std::cout << "Testing min (non-const):" << std::endl;
  Fixed& min1 = Fixed::min(a, b);
  std::cout << "min(a, b): " << min1 << std::endl;

  Fixed& min2 = Fixed::min(a, c);
  std::cout << "min(a, c): " << min2 << std::endl;

  std::cout << "Testing min (const):" << std::endl;
  const Fixed& min3 = Fixed::min(static_cast<const Fixed&>(a), static_cast<const Fixed&>(b));
  std::cout << "min(a, b): " << min3 << std::endl;

  const Fixed& min4 = Fixed::min(static_cast<const Fixed&>(a), static_cast<const Fixed&>(c));
  std::cout << "min(a, c): " << min4 << std::endl;

  std::cout << "Testing max (non-const):" << std::endl;
  Fixed& max1 = Fixed::max(a, b);
  std::cout << "max(a, b): " << max1 << std::endl;

  Fixed& max2 = Fixed::max(a, c);
  std::cout << "max(a, c): " << max2 << std::endl;

  std::cout << "Testing max (const):" << std::endl;
  const Fixed& max3 = Fixed::max(static_cast<const Fixed&>(a), static_cast<const Fixed&>(b));
  std::cout << "max(a, b): " << max3 << std::endl;

  const Fixed& max4 = Fixed::max(static_cast<const Fixed&>(a), static_cast<const Fixed&>(c));
  std::cout << "max(a, c): " << max4 << std::endl;

  return 0;
}
