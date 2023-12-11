#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
	
	Fixed d(1.5f);
	Fixed s(2);

	std::cout << d * s << std::endl;
	std::cout << s * s << std::endl;
	std::cout << s / 2 << std::endl;
	std::cout << d / s << std::endl;

    return (0);
}