#pragma once
#ifndef _H_USER_124AA
#define _H_USER_124AA
#include <string>

/// @brief Пользователь
class User
{
	/// @brief Номер
	int _id;

	/// @brief Логин 
	std::string _login;

	/// @brief Пароль
	std::string _password;

	/// @brief Сеттер для номера
	/// 
	/// @param id Номер
	void SetId(int id);

	/// @brief Сеттер для логина
	/// 
	/// @param login Логин
	void SetLogin(std::string login);

	/// @brief Сеттер для пароля
	/// 
	/// @param password пароль
	void SetPassword(std::string password);



public:

	/// @brief Проверка корректности пароля
	/// 
	/// @param password Пароль
	///
	/// @retval true Пароль верный
	/// @retval false Пароль неверный
	/// @return Корректность пароля
	bool IsCorrectPassword(std::string password);
	/// @brief Геттер номера
	/// 
	/// @return Номер пользователя
	int GetId();

	/// @brief Геттер логина
	/// 
	/// @return Логин пользователя
	std::string GetLogin();

	/// @brief Геттер пароля
	/// 
	/// @return Пароль
	std::string GetPassword();

	/// @brief Конструктор класса
	/// 
	/// @param id Номер
	/// @param login Логин
	/// @param password Пароль
	User(int id, std::string login, std::string password);
};
#endif