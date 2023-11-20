#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string Contact::getFirstName(void) const
{
	return (this->firstName);
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string Contact::getLastName(void) const
{
	return (this->lastName);
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

std::string Contact::getNickName(void) const
{
	return (this->nickName);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}