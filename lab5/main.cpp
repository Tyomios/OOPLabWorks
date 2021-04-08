#include "Person.h"
#include "Student.h"
#include "Teacher.h"

#include <iostream>

void ShowName(Person* person);

int main()
{
	Person* person = new Person("Vova", "Putin", "Vasil");
	Student* student = new Student("Dan", "Wolf", "Igorevich", 2019, 244);
	Teacher* teacher = new Teacher("Lubov", "Smith", "Donova", "PE");

	std::cout << student->GetFatherName() << std::endl;
	ShowName(person);
	ShowName(student);
	ShowName(teacher);

	delete person;
	delete student;
	delete teacher;

	return 0;
}

void ShowName(Person* person)
{
	std::cout << person->GetFirstName() << " "
		<< person->GetSecondName() << " "
		<< person->GetFatherName() << std::endl;
}