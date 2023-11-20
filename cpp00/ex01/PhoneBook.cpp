#include "PhoneBook.hpp"

void PhoneBook::col(std::string str)
{
		std::cout << "|";
		std::cout.width(10);
		if (str.length() > 10)
		{
			std::cout.width(9);
			std::cout << str.substr(0, 9) << ".";
		}
		else
			std::cout << str;
}

void PhoneBook::header(void)
{
    std::cout << std::setw(28) << std::setfill('-') << "My Phonebook";
	std::cout << std::setw(17) << std::setfill('-') << "-" << std::endl;
	std::cout << std::setfill(' ');
	col("index");
	col("first name");
	col("last name");
	col("nickname");
	std::cout << "|" << std::endl;
}
void PhoneBook::viewBook(void)
{
	int i;

	i = 0;
	header();
	while (i < 8)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1;
		col(this->contacts[i].getFirstName());
		col(this->contacts[i].getLastName());
		col(this->contacts[i].getNickName());
		std::cout << "|" << std::endl;
		i++;
	}
}

void PhoneBook::setContact(Contact contact, int i)
{
	this->contacts[i] = contact;
}

void PhoneBook::addContact()
{
	static int i;

	this->contacts[i % 8].init();
	i++;
}

void PhoneBook::show(int i)
{
	std::cout << std::setw(30) << std::setfill('-') << "Contact number " << i + 1; 
	std::cout << std::setw(14) << "-" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "First Name : " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name : " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nick Name : " << this->contacts[i].getNickName() << std::endl;
	std::cout << "Phone Number : " << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::setw(45) << std::setfill('-') << "-" << std::endl;
}

int PhoneBook::ftAtoi(std::string str)
{
	int	tmp = -1;
	if (str.find_first_not_of("0123456789") == std::string::npos)
	{
		std::istringstream iss(str);
		iss >> tmp;
	}
	return (tmp);
}
void PhoneBook::search(void)
{
	bool valid = false;
	std::string input;
	int index;

	index  = -1;
	std::cout << "Type index" << std::endl;
	do
	{
		std::cin.clear();
		std::cin.ignore();
		std::getline(std::cin, input, '\n');
		if (std::cin.eof())
			std::exit(0);
		index = ftAtoi(input);
		if (std::cin.good() && (index > 0 && index < 9))
			valid = true;
		else
			std::cout << "Index must be between 1 and 8" << std::endl;
	} while (!valid);
	show(index - 1);
}

void PhoneBook::welcome(void)
{
	std::cout << "I present to you :" << std::endl;
    std::cout << std::setw(27) << std::setfill('-') << "PHONEBOOK";
	std::cout << std::setw(18) << "-" << std::endl;
	std::cout << std::setw(25) << "USAGE";
	std::cout << std::setw(20) << "-" << std::endl;
    std::cout << "ADD\t: Add contact." << std::endl;
    std::cout << "SEARCH\t: Search contact by id." << std::endl;
    std::cout << "EXIT\t: Exit PhoneBook." << std::endl;
	std::cout << std::setw(45) << "-" << std::endl;
}

Contact PhoneBook::getContact(int i) const
{
	return (this->contacts[i]);
}
