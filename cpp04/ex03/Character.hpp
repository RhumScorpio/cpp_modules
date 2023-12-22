#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public :
        Character(void);
        Character(Character const &copy);
        Character(std::string const name);
        ~Character();
        Character &operator=(Character const &copy);
        std::string const &getName() const;
        void equip(AMateria *item);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria *getMateria(int idx);
    private :
    	AMateria    *_inventory[4];
		std::string const   _name;
};

#endif