#pragma once
#ifndef _H_STUDENT_DAB23
#define _H_STUDENT_DAB23
#include "Person.h"

#include <ctime>
#include <exception>

/// @brief Студент
class Student : public Person
{
private:

	/// @brief Год поступления 
	int _entranceYear;

	/// @brief Номер зачетной книжки
	int _id = 0;

	/// @brief Сеттер для года поступления
	/// 
	/// @param year Год поступления 
	void SetEntranceYear(int year);

public:

	/// @brief Геттер номера зачетной книжки
	/// 
	/// @return Номер зачетной книжки
	int GetID();

	/// @brief Геттер года поступления
	/// 
	/// @return Год поступления
	int GetYear();

	/// @brief Конструтор класса
	///
	/// @param name Имя 
	/// @param secondName Фамилия
	/// @param fatherName Отчество
	/// @param year Год поступления
	Student(std::string name, std::string secondName,
		std::string fatherName, int year, int id);
};
#endif