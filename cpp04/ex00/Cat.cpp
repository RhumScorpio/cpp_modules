#include "Cat.hpp"

Cat::Cat(void) : Animal()
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