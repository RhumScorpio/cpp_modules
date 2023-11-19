#include "Animal.hpp"

Animal::Animal(void)
{
    this->setString("default");
    std::cout << "Animal constructor" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}
std::string Animal::getType(void) const
{
    return (this->type);
}
void Animal::setString(std::string const str)
{
    this->type = str;
}

void Animal::makeSound(void) const
{
    std::cout << "***silence***" << std::endl;
}
