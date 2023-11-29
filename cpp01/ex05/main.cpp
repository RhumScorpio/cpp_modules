#include "Harl.hpp"
#include <cstdlib>

int main(void)
{
	int input = 0;
    int i = 0;
    int level = 0;
    std::string    identifiers[4]={ "INFO", "WARNING", "ERROR", "DEBUG" };
    Harl  harl;

	std::cout << "How much random generation of complains? : ";
	std::cin >> input;
	if (std::cin.eof())
		std::exit(0);
    while (i < input)
    {
        level = rand() % 4;
        harl.complain(identifiers[level]);
        i++;
    }
    return (0);
}
