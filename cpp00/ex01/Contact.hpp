#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	private :
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string setInput(std::string str);
 
	public :
		void init(void);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);
};

#endif
