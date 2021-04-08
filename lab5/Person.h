#pragma once
#ifndef _H_PERSON_96B7
#define _H_PERSON_96B7
#include <string>

/// @brief Человек
class Person
{
private:

	/// @brief Имя 
	std::string _firstName;

	/// @brief Фамилия 
	std::string _secondName;

	/// @brief Отчество 
	std::string _fatherName;

	/// @brief Сеттер для имени
	/// 
	/// @param name Имя
	void SetFirstName(std::string name);

	/// @brief Сеттер для фамилии
	/// 
	/// @param secondName фамилия
	void SetSecondName(std::string secondName);

	/// @brief Сеттер для отчества 
	/// 
	/// @param fatherName Отчество
	void SetFartherName(std::string fatherName);

public:
	
	/// @brief Геттер имени
	/// 
	/// @return Имя
	std::string GetFirstName();

	/// @brief Геттер фамилии
	/// 
	/// @return Фамилия
	std::string GetSecondName();

	/// @brief Геттер отчества
	/// 
	/// @return Отчество
	std::string GetFatherName();

	/// @brief Конструктор без параметров
	Person();

	/// @brief Конструктор
	/// 
	/// @param name Имя
	/// @param secondName Фамилия
	/// @param fatherName Отчество
	Person(std::string name, std::string secondName, 
				std::string fatherName);
};
#endif