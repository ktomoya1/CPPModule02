#pragma once

#include <cmath>
#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(const int int_value);
    Fixed(const float float_value);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int   getRawBits() const;
    void  setRawBits(int const raw);
    float toFloat(void) const;
    int   toInt(void) const;

  private:
    int fixed_value_;
    static const int kFractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
