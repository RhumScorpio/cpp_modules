 #include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon object " << this->type << " created" << std::endl;
}

Weapon::Weapon(void)
{
	std::cout << "Weapon object created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon object " << this->type << " destroyed" << std::endl;
}

std::string &Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}