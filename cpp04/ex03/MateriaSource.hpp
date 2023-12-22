#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
    private :
		AMateria	*_inventory[4];
    public :
        MateriaSource(void);
        MateriaSource(MateriaSource const &copy);
        ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &copy);
        MateriaSource(std::string const & type);
        std::string const &getType() const; //Returns the materia type
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif