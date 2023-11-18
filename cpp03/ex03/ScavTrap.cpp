#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy called" << std::endl;
}
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap constructor to mode: \"Guard Gate\"." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}