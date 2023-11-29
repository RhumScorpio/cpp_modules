#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
    this->Animal::setString("Dog");
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
    std::cout << "Dog destructor" << std::endl;
}
void Dog::makeSound(void) const
{
    std::cout << "Waf Waf Waf" << std::endl;
}