#ifndef CURE_HPP
#define CURE_HPP

#include "Character.hpp"

class Cure : public AMateria
{
    private :
        std::string _type;
    public :
        Cure(void);
        Cure(Cure const &copy);
        ~Cure();
        Cure &operator=(Cure const &copy);
        std::string const &getType() const; //Returns the materia type
        Cure* clone() const;
        void use(ICharacter& target);
};
#endif