#pragma once
#ifndef _H_TEACHER_25A01
#define _H_TEACHER_25A01
#include "Person.h"

/// @brief Учитель 
class Teacher : public Person
{
private:

	/// @brief Должность
	std::string _position;

	/// @brief Сеттер должности
	/// 
	/// @param position Должность
	void SetPosition(std::string position);

public:

	/// @brief Геттер должности
	///
	/// @return Должность
	std::string GetPosition();

	/// @brief Коструктор класса
	/// 
	/// @param name Имя 
	/// @param secondName Фамилия 
	/// @param fatherName Отчество
	/// @param position Должность
	Teacher(std::string name, std::string secondName,
		std::string fatherName, std::string position);
};
#endif