#pragma once

#include <cmath>
#include <climits>
#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(const int int_value);
    Fixed(const float float_value);
    Fixed(const Fixed& other);
    ~Fixed() {}

    Fixed& operator=(const Fixed& other);
    bool   operator>(const Fixed& other) const;
    bool   operator<(const Fixed& other) const;
    bool   operator>=(const Fixed& other) const;
    bool   operator<=(const Fixed& other) const;
    bool   operator==(const Fixed& other) const;
    bool   operator!=(const Fixed& other) const;
    Fixed  operator+(const Fixed& other) const;
    Fixed  operator-(const Fixed& other) const;
    Fixed  operator*(const Fixed& other) const;
    Fixed  operator/(const Fixed& other) const;
    Fixed& operator++();
    Fixed  operator++(int);
    Fixed& operator--();
    Fixed  operator--(int);

    int   getRawBits() const;
    void  setRawBits(int const raw);

    float toFloat(void) const;
    int   toInt(void) const;

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

  private:
    int fixed_value_;
    static const int kFractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
