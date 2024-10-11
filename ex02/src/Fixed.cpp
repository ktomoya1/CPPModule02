#include "Fixed.h"

#include <cmath>
#include <iostream>

Fixed::Fixed() : fixed_value_(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value) {
  std::cout << "Int constructor called" << std::endl;
  this->setRawBits(int_value << kFractionalBits);
}

Fixed::Fixed(const float float_value) {
  std::cout << "Float constructor called" << std::endl;
  this->fixed_value_ = static_cast<int>(roundf(float_value * (1 << kFractionalBits)));
}

Fixed::Fixed(const Fixed& other)
  : fixed_value_(other.getRawBits()) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other) {
    this->setRawBits(other.getRawBits());
  }
  return *this;
}

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

int Fixed::operator+(const Fixed& other) {
  return this->getRawBits() + other.getRawBits();
}

int Fixed::operator-(const Fixed& other) {
  return this->getRawBits() - other.getRawBits();
}

int Fixed::operator*(const Fixed& other) {
  int o_num = other.getRawBits();

  if (o_num != 0 && (INT_MAX / o_num > this->getRawBits())) {
    return INT_MAX;
  }
  return (this->getRawBits() * other.getRawBits()) >> kFractionalBits;
}

int Fixed::operator/(const Fixed& other) {
  if (other.getRawBits() == 0) {
    return (this->getRawBits() << kFractionalBits) / 1;
  return (this->getRawBits() << kFractionalBits) / other.getRawBits();
}

int Fixed::getRawBits() const {
  return this->fixed_value_;
}

void Fixed::setRawBits(int const raw) {
  this->fixed_value_ = raw;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(this->getRawBits()) / (1 << kFractionalBits);
}

int Fixed::toInt(void) const {
  return this->getRawBits() >> kFractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
        os << fixed.toFloat();
        return os;
}
