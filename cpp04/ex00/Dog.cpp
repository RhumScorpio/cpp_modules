#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal("Dog")
{
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Dog copy called." << std::endl;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Waf Waf Waf" << std::endl;
}