#include "Person.h"

void Person::SetFirstName(std::string name)
{
	this->_firstName = name;
}

void Person::SetSecondName(std::string secondName)
{
	this->_secondName = secondName;
}

void Person::SetFartherName(std::string fatherName)
{
	this->_fatherName = fatherName;
}

std::string Person::GetFirstName()
{
	return this->_firstName;
}

std::string Person::GetSecondName()
{
	return this->_secondName;
}

std::string Person::GetFatherName()
{
	return this->_fatherName;
}

Person::Person(std::string name, std::string secondName, std::string fatherName)
{
	SetFirstName(name);
	SetSecondName(secondName);
	SetFartherName(fatherName);
}

Person::Person() : Person(" ", " ", " ") {}