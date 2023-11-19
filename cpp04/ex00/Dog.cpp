#include "Dog.hpp"

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