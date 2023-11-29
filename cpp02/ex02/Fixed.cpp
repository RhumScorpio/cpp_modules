#include "Fixed.hpp"

// CONSTRUCTORS AND DESTRUCTOR

Fixed::~Fixed()
{
}

Fixed::Fixed(void)
{
    this->value = 0;
}

Fixed::Fixed(int const intValue)
{
    this->value = intValue << this->dec;
}
        
Fixed::Fixed(const float floatValue)
{
    this->value = floatValue * (1 << this->dec);
}

Fixed::Fixed(const Fixed &fixed)
{
    this->value = fixed.value;
}

// GETTER AND SETTER

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->dec));
}

int Fixed::toInt(void) const
{
    return (this->value >> this->dec);
}

// OPERATORS

bool Fixed::operator>(Fixed const &copy) const
{
    return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator<(Fixed const &copy) const
{
    return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator>=(Fixed const &copy) const
{
    return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator<=(Fixed const &copy) const
{
    return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator==(Fixed const &copy) const
{
    return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(Fixed const &copy) const
{
    return (this->toFloat() != copy.toFloat());
}

Fixed Fixed::operator++(void)
{
    this->setRawBits(this->toFloat() + 1);
    std::cout << this->toFloat() << std::endl;
    return (*this);
}

Fixed Fixed::operator--(void)
{
    this->setRawBits(this->toFloat() - 1);
    std::cout << this->toFloat() << std::endl;
    return (*this);
}

Fixed Fixed::operator++(int value)
{
    this->setRawBits(this->toFloat() + value);
    std::cout << this->toFloat() << std::endl;
    return (*this);
}

Fixed Fixed::operator--(int value)
{
    this->setRawBits(this->toFloat() - value);
    std::cout << this->toFloat() << std::endl;
    return (*this);
}

Fixed Fixed::operator+(Fixed const &copy) const
{
    Fixed result(this->toFloat() + copy.toFloat());
    return (result);
}

Fixed Fixed::operator-(Fixed const &copy) const
{
    Fixed result(this->toFloat() - copy.toFloat());
    return (*this);
}

Fixed Fixed::operator*(Fixed const &copy) const
{
    Fixed result(this->toFloat() * copy.toFloat());
    return (result);
}

Fixed Fixed::operator/(Fixed const &copy) const
{
    Fixed result(this->toFloat() / copy.toFloat());
    return (result);
}

const Fixed &Fixed::min(Fixed const &nbl, Fixed const &nbr)
{
    if (nbl.getRawBits() > nbr.getRawBits())
        return (nbr);
    else
        return (nbl);
}

const Fixed &Fixed::max(Fixed const &nbl, Fixed const &nbr)
{
    if (nbl.getRawBits() < nbr.getRawBits())
        return (nbr);
    else
        return (nbl);
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	this->value = copy.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &str, Fixed const &fixed)
{
	return (str << fixed.toFloat());
}