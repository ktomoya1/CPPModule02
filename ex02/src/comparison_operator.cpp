#include "Fixed.h"

bool Fixed::operator>(const Fixed& other) const {
  return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const {
  return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const {
  return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const {
  return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const {
  return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const {
  return this->getRawBits() != other.getRawBits();
}
