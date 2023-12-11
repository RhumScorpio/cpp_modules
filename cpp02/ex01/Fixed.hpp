#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static int const dec = 8;
    public:
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(Fixed const &copy);
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(const Fixed &fixed);
        Fixed(void);
        ~Fixed();
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif