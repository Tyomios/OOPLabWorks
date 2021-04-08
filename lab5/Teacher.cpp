#include "Teacher.h"

void Teacher::SetPosition(std::string position)
{
	this->_position = position;
}

std::string Teacher::GetPosition()
{
	return this->_position;
}

Teacher::Teacher(std::string name, std::string secondName, std::string fatherName, std::string position)
{
	Person(name, secondName, fatherName);
	SetPosition(position);
}
