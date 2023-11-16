#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static int const dec = 8;
    public:
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator=(Fixed const &copy);
        Fixed(const Fixed &fixed);
        Fixed(void);
        ~Fixed();
};

#endif