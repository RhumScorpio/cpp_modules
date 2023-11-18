#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const _name): ClapTrap(_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "HI FIVE!" << std::endl;
}
