#pragma once
#ifndef _H_ENUMERATE_ACCB03
#define _H_ENUMERATE_ACCB03
#include "Common.h"
#include <iostream>


enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Purple
};

enum WeekDays
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Style
{
	Comedy,
	Drama,
	Trailer,
	Thriller,
	Horror,
	Action	
};

enum StudyFormat
{
	InPerson,
	Distance,
	Night,
	Online
};

enum Companies
{
	Apple,
	LG,
	Samsung,
	Sony,
	Google
};

enum YearSeasons
{
	Winter,
	Spring,
	Summer,
	Autumn
};

/// @brief Создание массивов перечислений
void DemoEnums();

/// @brief Выводит название цвета на экран
/// 
/// @param color Цвет
void WriteColor(Color color);

/// @brief Интерфейс для работы с перечислением
/// 
/// @return Выбранное пользователем значение
Color ReadColor();

/// @brief Подсчет в массиве элементов красного цвета
/// 
/// @param colors Указатель на массив
/// @param size Размер массива
/// 
/// @return Количество красных элементов в массиве
int CountRed(Color* colors, int size);

/// @brief Подсчет в массиве элементов указанного цвета
/// 
/// @param colors Массив
/// @param size Размер массива
/// @param findedColor Искомый цвет
/// 
/// @return Количество элементов нужного цвета
int CountColor(Color* colors, int size, Color findedColor);
#endif