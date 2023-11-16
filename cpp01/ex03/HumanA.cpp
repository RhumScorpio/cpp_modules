#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << "HumanA created" << this->weapon.getType() << std::endl;
}

HumanA::HumanA(void)
{
    std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroyed" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " A attacks." << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}