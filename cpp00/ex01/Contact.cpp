#include "Contact.hpp"

std::string Contact::setInput(std::string str)
{
	std::string input = "";
	bool valid = false;

	do
	{	
		std::cout << str << std::flush;
		std::cin.ignore();
		std::getline(std::cin, input, '\n');
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Please." << std::endl;
		}
	} while (!valid);
	return (input);
}

void Contact::init(void)
{
	setFirstName(setInput("Enter first name : "));
	setLastName(setInput("Enter last name : "));
	setNickName(setInput("Enter nick name : "));
	setPhoneNumber(setInput("Enter phone number : "));
	setDarkestSecret(setInput("Enter darkest secret : "));
	std::cout << std::endl;
}
