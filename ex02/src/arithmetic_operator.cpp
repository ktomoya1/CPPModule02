#include "Fixed.h"

#include <climits>

Fixed Fixed::operator+(const Fixed& other) const {
  Fixed ret;
  ret.setRawBits(this->getRawBits() + other.getRawBits());
  return ret;
}

Fixed Fixed::operator-(const Fixed& other) const {
  Fixed ret;
  ret.setRawBits(this->getRawBits() - other.getRawBits());
  return ret;
}

Fixed Fixed::operator*(const Fixed& other) const {
  Fixed ret;
  ret.setRawBits((this->getRawBits() * other.getRawBits()) >> kFractionalBits);
  return ret;
}

Fixed Fixed::operator/(const Fixed& other) const {
  Fixed ret;
  ret.setRawBits((this->getRawBits() << kFractionalBits) / other.getRawBits());
  return ret;
}
