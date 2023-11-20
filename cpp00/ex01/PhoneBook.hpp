#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdlib.h>

class PhoneBook
{
	private :
		Contact contacts[8];
		void col(std::string str);
		void header(void);
		int ftAtoi(std::string str);

	public	:
		void viewBook(void);
		void addContact(void);
		void setContact(Contact contact, int i);
		void welcome(void);
		void search(void);
		void show(int i);
		Contact getContact(int i) const;
};

#endif
