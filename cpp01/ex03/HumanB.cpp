#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << "HumanB created" << std::endl;
}

HumanB::HumanB(void)
{
    std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::attack(void)
{
    std::cout << this->name << " B attacks with " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}