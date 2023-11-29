#include "Harl.hpp"
#include <cstdlib>
#include <string>

int main(void)
{
	bool exit = false;
    Harl  harl;
	std::string input;

	std::cout << "Harl Filter takes an argument between : DEBUG INFO WARNING ERROR (use EXIT to exit)" << std::endl;
	do
	{
		std::cout << "input> " << std::flush;
		std::getline(std::cin, input, '\n');
		if (std::cin.eof())
			std::exit(0);
		if (!input.compare("EXIT"))
			exit = true;
		else if (std::cin.good() && !input.empty())
			harl.complain(input);
		std::cin.ignore();
			
	} while (!exit); 
    return (0);
}
