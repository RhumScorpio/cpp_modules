#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	std::cout << "Hello World!" << std::endl;
	int i = 0;
	std::cout << "type hord size : " << std::flush;
	std::cin >> i;
	Zombie *hord = zombieHorde(i, "Alex");

	delete [] hord;
	return (0);
}
