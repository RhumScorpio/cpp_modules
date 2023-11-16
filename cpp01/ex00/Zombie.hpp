#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdlib.h>

class Zombie
{
	private :
		std::string _name;

	public	:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void announce(void);
};

#endif
