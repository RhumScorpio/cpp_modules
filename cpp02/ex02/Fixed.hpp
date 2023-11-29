#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static int const dec = 8;
    public:
    // getters and setters
        int getRawBits(void) const;
        void setRawBits(int const raw);
    // to float to int
        float toFloat( void ) const;
        int toInt( void ) const;
    // assignment operator
        Fixed &operator=(Fixed const &copy);
    // comparison operators
        bool operator>(Fixed const &copy) const;
        bool operator<(Fixed const &copy) const;
        bool operator>=(Fixed const &copy) const;
        bool operator<=(Fixed const &copy) const;
        bool operator==(Fixed const &copy) const;
        bool operator!=(Fixed const &copy) const;
    // incrementation and decrementation operators
        Fixed operator++(void);
        Fixed operator--(void);
        Fixed operator++(int value);
        Fixed operator--(int value);
    // basic operations
        Fixed operator+(Fixed const &copy) const;
        Fixed operator-(Fixed const &copy) const;
        Fixed operator*(Fixed const &copy) const;
        Fixed operator/(Fixed const &copy) const;
    // min
        static const Fixed &min(Fixed const &nbl, Fixed const &nbr);
    // max
        static const Fixed &max(Fixed const &nbl, Fixed const &nbr);
    // constructors
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(const Fixed &fixed);
        Fixed(void);
    // destructor
        ~Fixed();
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif