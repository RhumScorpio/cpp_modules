#ifndef IMATERIA_SOURCE_HPP
#define IMATERIA_SOURCE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif