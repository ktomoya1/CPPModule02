#pragma once

class Fixed {
  public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int  getRawBits() const;
    void setRawBits(int const raw);

  private:
    int fixed_value_;
    static const int kFractionalBits = 8;
};
