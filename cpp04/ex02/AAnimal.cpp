#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    this->setString("default");
    std::cout << "Default AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
    *this = copy;
}
AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}
AAnimal &AAnimal::operator=(AAnimal const &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}
void AAnimal::setString(std::string const str)
{
    this->type = str;
}

void AAnimal::makeSound(void) const
{
    std::cout << "AAnimal sound" << std::endl;
}