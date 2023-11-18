#include "FragTrap.hpp"

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
	FragTrap	bob("Bob");
	while (bob.getHitValue())
	{
		bob.takeDamage(20);
		bob.beRepaired(10);
	}
	bob.takeDamage(1);
	bob.highFivesGuys();
}