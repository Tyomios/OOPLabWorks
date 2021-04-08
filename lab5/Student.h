#pragma once
#ifndef _H_STUDENT_DAB23
#define _H_STUDENT_DAB23
#include "Person.h"

#include <ctime>
#include <exception>

/// @brief �������
class Student : public Person
{
private:

	/// @brief ��� ����������� 
	int _entranceYear;

	/// @brief ����� �������� ������
	int _id = 0;

	/// @brief ������ ��� ���� �����������
	/// 
	/// @param year ��� ����������� 
	void SetEntranceYear(int year);

public:

	/// @brief ������ ������ �������� ������
	/// 
	/// @return ����� �������� ������
	int GetID();

	/// @brief ������ ���� �����������
	/// 
	/// @return ��� �����������
	int GetYear();

	/// @brief ���������� ������
	///
	/// @param name ��� 
	/// @param secondName �������
	/// @param fatherName ��������
	/// @param year ��� �����������
	Student(std::string name, std::string secondName,
		std::string fatherName, int year, int id);
};
#endif