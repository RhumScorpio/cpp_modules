#include "Animal.hpp"

Animal::Animal(void)
{
    this->setString("default");
    std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
}
Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
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
    std::cout << "Animal sound" << std::endl;
}
