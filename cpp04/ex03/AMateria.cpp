#include "AMateria.hpp"

AMateria::AMateria(void) : _type("simple")
{
    std::cout << this->getType() << " AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << this->getType() << " AMateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const &copy) : _type(copy.getType())
{
    std::cout << this->getType() << " AMateria copy constructor" << std::endl;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(AMateria const &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;   
}
