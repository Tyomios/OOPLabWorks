#include "Student.h"

void Student::SetEntranceYear(int year)
{
	const int secondsInYears = 31536000;
	const int startYear = 1970;
	time_t currentYear = (time(NULL) / secondsInYears) + startYear;

	if (year <= 0 || year > currentYear)
	{
		throw std::exception("Error. Year can't be "
			"less or equal zero, more, than current year");
	}
	
	this->_entranceYear = year;
}

int Student::GetID()
{
	return this->_id;
}

int Student::GetYear()
{
	return this->_entranceYear;
}

Student::Student(std::string name, std::string secondName,
	std::string fatherName, int year, int id) : Person(name, secondName, fatherName)
{
	SetEntranceYear(year);
	this->_id = id;
}
