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
    std::cout << "... sound ..." << std::endl;
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
void Dog::makeSound(void) const
{
    std::cout << "Waf Waf Waf" << std::endl;
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

void Cat::makeSound(void) const
{
    std::cout << "Miaaaaaw" << std::endl;
}
