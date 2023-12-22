#ifndef ICE_HPP
#define ICE_HPP

#include "Character.hpp"

class Ice : public AMateria
{
    private :
        std::string _type;
    public :
        Ice(void);
        Ice(Ice const &copy);
        ~Ice();
        Ice &operator=(Ice const &copy);
        std::string const &getType() const; //Returns the materia type
        Ice* clone() const;
        void use(ICharacter& target);
};
#endif