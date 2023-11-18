#include "Animal.hpp"

void Animal::makeSound(void)
{
    if (this->getType().compare("Cat"))
        std::cout << "Miaaaaaw" << std::endl;
    if (this->getType().compare("Dog"))
        std::cout << "Waf Waf Waf" << std::endl;
    else
        std::cout << "... sound ..." << std::endl;
}

Animal::Animal(void)
{
    this->setString("default");
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}
std::string Animal::getType(void)
{
    return (this->type);
}
void Animal::setString(std::string const str)
{
    this->type = str;
}

Dog::Dog(void)
{
    this->Animal::setString("Dog");
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Cat::Cat(void)
{
    this->Animal::setString("Cat");
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}