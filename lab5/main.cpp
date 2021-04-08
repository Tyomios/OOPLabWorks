﻿#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "PaidUser.h"

#include <iostream>

void ShowName(Person* person);
User* Login(User** users, int usersCount, std::string enteredLogin, std::string enteredPassword);

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

	User** allUsers = new User * []
	{
		new User(100000, "morkovka1995", "1995morkovka"),
			new User(100001, "ilon_mask", "X æ A-12"),
			new User(100002, "megazver", "password"),
			new User(100003, "yogurt", "ksTPQzSu"),
			new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
			new PaidUser(200001, "system_exe", "UgfkDGmU"),
			new PaidUser(200002, "RazorQ", "TBgRnbCP"),
			new PaidUser(200003, "schdub", "CetyQVID"),
	};
	
	std::string login = "megazver";
	std::string password = "password";
	User* loginedUser = Login(allUsers, 8, login, password);

	std::cout << "Signed in as: " << loginedUser->GetLogin() << std::endl;

	login = "system_exe";
	password = "UgfkDGmU";
	User* loginedPaidUser = Login(allUsers, 8, login, password);

	std::cout << "Signed in as: " << loginedPaidUser->GetLogin() << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete allUsers[i];
	}

	delete[] allUsers; // 29 строк, было 32 сжатых

	return 0;
}

void ShowName(Person* person)
{
	std::cout << person->GetFirstName() << " "
		<< person->GetSecondName() << " "
		<< person->GetFatherName() << std::endl;
}


User* Login(User** users, int usersCount, std::string enteredLogin, std::string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw std::exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}