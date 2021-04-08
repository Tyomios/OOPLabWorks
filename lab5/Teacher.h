#pragma once
#ifndef _H_TEACHER_25A01
#define _H_TEACHER_25A01
#include "Person.h"

/// @brief ������� 
class Teacher : public Person
{
private:

	/// @brief ���������
	std::string _position;

	/// @brief ������ ���������
	/// 
	/// @param position ���������
	void SetPosition(std::string position);

public:

	/// @brief ������ ���������
	///
	/// @return ���������
	std::string GetPosition();

	/// @brief ���������� ������
	/// 
	/// @param name ��� 
	/// @param secondName ������� 
	/// @param fatherName ��������
	/// @param position ���������
	Teacher(std::string name, std::string secondName,
		std::string fatherName, std::string position);
};
#endif