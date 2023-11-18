#ifndef DIAMON_TRAP_HPP
# define DIAMON_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string	_name;
    public :
		DiamondTrap(std::string const &name);
    	DiamondTrap(void);
		~DiamondTrap(void);
        void whoAmI();
};

#endif