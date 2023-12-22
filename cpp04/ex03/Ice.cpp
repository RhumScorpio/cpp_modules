#include "Ice.hpp"

Ice::Ice(void) : _type("ice")
{
    std::cout << this->getType() << " constructor" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy), _type(copy.getType())
{
    std::cout << this->getType() << " copy constructor" << std::endl;
}

Ice::~Ice()
{
    std::cout << this->getType() << " destructor" << std::endl;
}

Ice &Ice::operator=(Ice const &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    return (*this);
}

std::string const &Ice::getType(void) const
{
    return (this->_type);
} //Returns the materia type

Ice* Ice::clone(void) const
{
    Ice *ice = new Ice();
    return (ice);
}

void Ice::use(ICharacter& target)
{
    std::cout
    << "* shoots an ice bolt at "
    << target.getName()
    << " *"
    << std::endl;
}