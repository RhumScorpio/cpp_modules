#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(std::string _name);
        FragTrap(void);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif