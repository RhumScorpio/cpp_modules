#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->WrongAnimal::setString("WrongCat");
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal()
{
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat WrongCat::operator=(WrongCat const &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}