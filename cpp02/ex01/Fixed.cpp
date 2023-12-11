#include "Fixed.hpp"
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const intValue) : value(intValue << this->dec)
{
	std::cout << "Int constructor called" << std::endl;
}
        
Fixed::Fixed(const float floatValue) : value(roundf(floatValue * (1 << this->dec)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value)
{
    std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->value = copy.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &str, Fixed const &fixed)
{
	return (str << fixed.toFloat());
}

float Fixed::toFloat(void) const
{
    return (this->value / (float)(1 << this->dec));
}

int Fixed::toInt(void) const
{
    return (this->value >> this->dec);
}
