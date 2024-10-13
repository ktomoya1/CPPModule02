#include "Fixed.h"

Fixed& Fixed::operator++() {
  this->setRawBits(this->getRawBits() + 1);
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp;
  tmp.setRawBits(this->getRawBits());
  this->setRawBits(this->getRawBits() + 1);
  return tmp;
}

Fixed& Fixed::operator--() {
  this->setRawBits(this->getRawBits() - 1);
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp;
  tmp.setRawBits(this->getRawBits());
  this->setRawBits(this->getRawBits() - 1);
  return tmp;
}
