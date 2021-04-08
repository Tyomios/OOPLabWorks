#pragma once
#ifndef _H_POST_2734B
#define _H_POST_2734B
#include <string>

/// @brief Статья
class Post
{
	/// @brief Заголовок
	std::string _title;

	/// @brief Содержание
	std::string _text;
public:

	/// @brief Сеттер для заголовка
	/// 
	/// @param title Заголовок
	void SetTitle(std::string title);

	/// @brief Сеттер для содержания
	/// 
	/// @param text Содержание
	void SetText(std::string text);

	/// @brief Геттер для заголовка
	/// 
	/// @return Заголовок
	std::string GetTitle();

	/// @brief Геттер для содержания
	/// 
	/// @return Содержание
	std::string GetText();

	/// @brief Конструктор
	/// 
	/// @param title Заголовок
	/// @param text Содержание
	Post(std::string title, std::string text);
};
#endif