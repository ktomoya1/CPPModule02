#include "Fixed.h"

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  if (a.getRawBits() < b.getRawBits()) {
    return a;
  }
  return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  if (a.getRawBits() < b.getRawBits()) {
    return a;
  }
  return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  if (a.getRawBits() > b.getRawBits()) {
    return a;
  }
  return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  if (a.getRawBits() > b.getRawBits()) {
    return a;
  }
  return b;
}
