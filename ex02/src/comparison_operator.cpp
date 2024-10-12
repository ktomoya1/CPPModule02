#include "Fixed.h"

bool Fixed::operator>(const Fixed& other) {
  return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) {
  return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) {
  return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) {
  return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) {
  return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) {
  return this->getRawBits() != other.getRawBits();
}
