#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat constructor" << std::endl;
}


Cat::Cat(Cat const &copy) : Animal("Cat")
{
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}
Cat &Cat::operator=(Cat const &copy)
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Cat copy called." << std::endl;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaaaaaw" << std::endl;
}