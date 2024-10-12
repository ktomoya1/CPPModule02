#include "Fixed.h"

#include <cmath>
#include <iostream>

Fixed::Fixed() : fixed_value_(0) {}

Fixed::Fixed(const int int_value) {
  this->setRawBits(int_value << kFractionalBits);
}

Fixed::Fixed(const float float_value) {
  this->fixed_value_ =
      static_cast<int>(roundf(float_value * (1 << kFractionalBits)));
}

Fixed::Fixed(const Fixed& other) : fixed_value_(other.getRawBits()) {}

Fixed& Fixed::operator=(const Fixed& other) {
  if (this != &other) {
    this->setRawBits(other.getRawBits());
  }
  return *this;
}

int Fixed::getRawBits() const { return this->fixed_value_; }

void Fixed::setRawBits(int const raw) { this->fixed_value_ = raw; }

float Fixed::toFloat(void) const {
  return static_cast<float>(this->getRawBits()) / (1 << kFractionalBits);
}

int Fixed::toInt(void) const { return this->getRawBits() >> kFractionalBits; }

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}
