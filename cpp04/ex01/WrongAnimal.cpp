#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->setString("WrongAnimal default");
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal WrongAnimal::operator=(WrongAnimal const &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
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
    std::cout << "Wrong animal sound" << std::endl;
}