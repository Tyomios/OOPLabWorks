#pragma once
#ifndef _H_PERSON_96B7
#define _H_PERSON_96B7
#include <string>

/// @brief �������
class Person
{
private:

	/// @brief ��� 
	std::string _firstName;

	/// @brief ������� 
	std::string _secondName;

	/// @brief �������� 
	std::string _fatherName;

	/// @brief ������ ��� �����
	/// 
	/// @param name ���
	void SetFirstName(std::string name);

	/// @brief ������ ��� �������
	/// 
	/// @param secondName �������
	void SetSecondName(std::string secondName);

	/// @brief ������ ��� �������� 
	/// 
	/// @param fatherName ��������
	void SetFartherName(std::string fatherName);

public:
	
	/// @brief ������ �����
	/// 
	/// @return ���
	std::string GetFirstName();

	/// @brief ������ �������
	/// 
	/// @return �������
	std::string GetSecondName();

	/// @brief ������ ��������
	/// 
	/// @return ��������
	std::string GetFatherName();

	/// @brief ����������� ��� ����������
	Person();

	/// @brief �����������
	/// 
	/// @param name ���
	/// @param secondName �������
	/// @param fatherName ��������
	Person(std::string name, std::string secondName, 
				std::string fatherName);
};
#endif