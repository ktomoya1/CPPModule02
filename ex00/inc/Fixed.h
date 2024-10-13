#pragma once

#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(const Fixed& other);
    ~Fixed();

    Fixed& operator=(const Fixed& other);

    int  getRawBits() const;
    void setRawBits(int const raw);

  private:
    int fixed_value_;
    static const int kFractionalBits = 8;
};
