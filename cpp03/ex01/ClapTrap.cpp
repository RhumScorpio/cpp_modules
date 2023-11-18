#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(void):_name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (!this->_energyPoints || !this->_hitPoints)
        std::cout << "No more hits for " << this->_name << std::endl;
    else
    {
        std::cout << "ClapTrap attacks " << target <<  " causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
        this->_hitPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= this->getHitValue())
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap takes " << amount << " damage points." << std::endl;
    }
    else
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_energyPoints)
        std::cout << "No more energy for " << this->_name << std::endl;
    else
    {
        std::cout << "ClapTrap is repaired with " << amount << " hit points." << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}
unsigned int ClapTrap::getDamageValue(void)
{
    std::cout << this->_name << " damage value is " << this->_attackDamage << std::endl;
    return (this->_attackDamage);
}

unsigned int ClapTrap::getEnergyValue(void)
{
    std::cout << this->_name << " energy value is " << this->_energyPoints << std::endl;
    return (this->_energyPoints);
}

unsigned int ClapTrap::getHitValue(void)
{
    std::cout << this->_name << " hit value is " << this->_hitPoints << std::endl;
    return (this->_hitPoints);
}