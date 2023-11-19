#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->setString("WrongAnimal");
    std::cout << "WrongAnimal constructor" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
    return (this->type);
}
void WrongAnimal::setString(std::string const str)
{
    this->type = str;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Meeeeow" << std::endl;
}

WrongCat::WrongCat(void)
{
    this->WrongAnimal::setString("WrongCat");
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}
void WrongCat::makeSound(void) const
{
    std::cout << "***silence***" << std::endl;
}