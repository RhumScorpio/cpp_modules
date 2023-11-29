#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneContact;
	bool	exit = false;
	std::string input = "";

	phoneContact.welcome();
	do
	{
		std::cout << "PROMPT > ";
		std::cin >> input;
		if (std::cin.eof())
			std::exit(0);
		if (!input.compare("ADD"))
			phoneContact.addContact();
		else if (!input.compare("SEARCH"))
		{
			phoneContact.viewBook();
			phoneContact.search();
		}
		else if (!input.compare("EXIT"))
			exit = true;
	} while (!exit);
	return (0);
}
