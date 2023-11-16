#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::cout << "Hello World!" << std::endl;
	Zombie	*z = newZombie("Alex");
	z->announce();
	randomChump("Bruno");
	delete z;
	return (0);
}
