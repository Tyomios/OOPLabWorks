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

/// @brief Поиск индекса книги по автору
/// 
/// @param books Массив книг
/// @param booksCount Количество книг в массиве
/// @param author Автор
///
/// @retval -1 Не нашлось ни одной книги с указанным автором
/// @return Индекс первой найденной книги с подходящим автором
int FindBookByAuthor(Book* books, int booksCount, std::string author);
#endif