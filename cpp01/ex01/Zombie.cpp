#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Zombie object created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}