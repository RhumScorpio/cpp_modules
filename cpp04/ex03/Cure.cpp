#include "Cure.hpp"

Cure::Cure(void) : _type("cure")
{
    std::cout << this->getType() << " constructor" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy), _type(copy.getType())
{
    std::cout << this->getType() << " copy constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << this->getType() << " destructor" << std::endl;
}

Cure &Cure::operator=(Cure const &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

std::string const &Cure::getType(void) const
{
    return (this->_type);
} //Returns the materia type

Cure* Cure::clone(void) const
{
    Cure *cure = new Cure();
    return (cure);
}

void Cure::use(ICharacter& target)
{
    std::cout
    << "* heals "
    << target.getName()
    << "’s wounds *"
    << std::endl;
}