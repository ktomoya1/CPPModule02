#include "Fixed.h"

#include <climits>

Fixed Fixed::operator+(const Fixed& other) {
  int t = this->getRawBits();
  int o = other.getRawBits();
  Fixed ret;

//  if (t > INT_MAX - o) {
//    ret.setRawBits(INT_MAX);
//  } else {
//    ret.setRawBits(t + o);
//  }
  ret.setRawBits(t + o);
  return ret;
}

Fixed Fixed::operator-(const Fixed& other) {
  int t = this->getRawBits();
  int o = other.getRawBits();
  Fixed ret;

//  if (t < INT_MIN + o) {
//    ret.setRawBits(INT_MIN);
//  } else {
//    ret.setRawBits(t - o);
//  }
  ret.setRawBits(t - o);
  return ret;
}

Fixed Fixed::operator*(const Fixed& other) {
  int t = this->getRawBits();
  int o = other.getRawBits();
  Fixed ret;

//  if (o != 0 && ((INT_MAX / o) < t)) {
//    ret.setRawBits(INT_MAX);
//  } else {
//    ret.setRawBits((t * o) >> kFractionalBits);
//  }
  ret.setRawBits((t * o) >> kFractionalBits);
  return ret;
}

Fixed Fixed::operator/(const Fixed& other) {
  int t = this->getRawBits();
  int o = other.getRawBits();
  Fixed ret;

//  if (o == 0) {
//    o = 1 << kFractionalBits;
//  }
  ret.setRawBits((t << kFractionalBits) / o);
  return ret;
}
