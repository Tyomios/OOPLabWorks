#pragma once
#ifndef _H_USER_124AA
#define _H_USER_124AA
#include <string>

/// @brief ������������
class User
{
	/// @brief �����
	int _id;

	/// @brief ����� 
	std::string _login;

	/// @brief ������
	std::string _password;

	/// @brief ������ ��� ������
	/// 
	/// @param id �����
	void SetId(int id);

	/// @brief ������ ��� ������
	/// 
	/// @param login �����
	void SetLogin(std::string login);

	/// @brief ������ ��� ������
	/// 
	/// @param password ������
	void SetPassword(std::string password);



public:

	/// @brief �������� ������������ ������
	/// 
	/// @param password ������
	///
	/// @retval true ������ ������
	/// @retval false ������ ��������
	/// @return ������������ ������
	bool IsCorrectPassword(std::string password);
	/// @brief ������ ������
	/// 
	/// @return ����� ������������
	int GetId();

	/// @brief ������ ������
	/// 
	/// @return ����� ������������
	std::string GetLogin();

	/// @brief ������ ������
	/// 
	/// @return ������
	std::string GetPassword();

	/// @brief ����������� ������
	/// 
	/// @param id �����
	/// @param login �����
	/// @param password ������
	User(int id, std::string login, std::string password);
};
#endif