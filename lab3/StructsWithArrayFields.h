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
	int AuthorsCount = 10;
	std::string* Authors = new std::string[AuthorsCount];
};


struct Route
{
	int Number;
	int ContinuingInMinutes;
	int Interval;
	int HaltCount = 10;
	std::string* Halts = new std::string[HaltCount];
};

/// @brief Работа со структурой Book
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

/// @brief Инициализация полей структуры через консоль
/// 
/// @param route Инициализируеммый обьект
void ReadRouteFromConsole(Route& route);

/// @brief Вывод данных обьекта на экран
/// 
/// @param route Обьект типа Route
void WriteRouteToConsole(Route& route);

/// @brief Поиск маршрута до указанного пункта
/// 
/// @param routes Массив маршрутов
/// @param routesCount Количество маршрутов
/// @param halt Искомое место
///
/// @retval -1 Маршрут с указанным местом не найден
/// @return Индекс маршрута с искомым местом
int FindRouteTo(Route* routes, int routesCount, std::string halt);

/// @brief Работа со структурой Route 
void DemoRoute();
#endif