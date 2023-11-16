#include "Fixed.hpp"

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->value = copy.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &fixed)
{
    this->value = fixed.value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(void)
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
        std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
