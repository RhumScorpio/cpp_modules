#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &copy);
		ScavTrap(void);
		~ScavTrap();
		void guardGate(void);
		ScavTrap &operator=(ScavTrap const &copy);
};

#endif