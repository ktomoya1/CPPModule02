#include "Fixed.h"

int& Fixed::operator++() {
  ++this->fixed_value_;
  return this->fixed_value_;
}

int Fixed::operator++(int) {
  int tmp = this->getRawBits();

  ++this->fixed_value_;
  return tmp;
}

int& Fixed::operator--() {
  --this->fixed_value_;
  return this->fixed_value_;
}

int Fixed::operator--(int) {
  int tmp = this->getRawBits();

  --this->fixed_value_;
  return tmp;
}
