#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name)
{
    std::cout << "Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Diamond default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Diamond destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "whoAmI" << std::endl;
}