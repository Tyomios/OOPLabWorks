#pragma once
#ifndef _H_STRUCTSWITHARRAYFIELDS_DDAB02C
#define _H_STRUCTSWITHARRAYFIELDS_DDAB02C
#include "Common.h"
#include <iostream>
#include <string>
#include <ctime>


struct Book
{
	std::string Name;
	int Year;
	int PagesCount;
	int AuthorsCount;
	std::string* Authors = new std::string[AuthorsCount];
};

/// @brief Обьявление обьекта структуры Book
void DemoBook();

/// @brief Чтение полей структуры Book с клавиатуры
/// 
/// @param book Обьект типа Book
void ReadBookFromConsole(Book& book);

/// @brief Вывод данных обьекта на экран
/// 
/// @param book Обьект типа Book
void WriteBookToConsole(Book& book);
#endif