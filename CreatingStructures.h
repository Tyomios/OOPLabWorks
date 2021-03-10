#pragma once
#ifndef _H_CREATINGSTRUCTURES_B0968
#define _H_CREATINGSTRUCTURES_B0968
#include "Enumerate.h"
#include <string>


struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};


struct Flight
{
	std::string StartPoint;
	std::string EndPoint;
	int TimeOfFlightMinutes;
};


struct Film
{
	std::string Name;
	int TimeInMinutes;
	int Year;
	Style Style;
	double Rating;
};


struct Time
{
	int Hours;
	int	Minutes;
	int Seconds;
};


struct Contact
{
	std::string Name;
	//TODO: Хранить номер телефона в int - не лучшая идея. Стандартный номер состоит из 11 цифр, а int вмещает только 10
	// Если с номером телефона не производятся арифметические операции, то лучше поместить его в string
	int Number;
	bool IsFavorite;
};


struct Song
{
	std::string Name;
	int CountingInSeconds;
	bool IsFavorite;
};


struct Subject
{
	std::string Name;
	int Mark;
	bool IsCertified;
};


/// @brief Создание обьекта типа Rectangle
/// 
/// @param size размер массива
/// 
/// @return Указатель на первый (или единственный) элемент
Rectangle* DemoRectangle(int size);

/// @brief Создание обьекта типа Flight
/// 
/// @param size размер массива
/// 
/// @return Указатель на первый (или единственный) элемент
Flight* DemoFlight(int size);

/// @brief Создание обьекта типа Film
/// 
/// @param size размер массива
/// 
/// @return Указатель на первый (или единственный) элемент
Film* DemoFilm(int size);

/// @brief Создание обьекта типа Time
/// 
/// @param size размер массива
///
/// @return Указатель на первый (или единственный) элемент
Time* DemoTime(int size);

/// @brief Создание обьекта типа Contact
/// 
/// @param size размер массива
/// 
/// @return Указатель на первый (или единственный) элемент
Contact* DemoContact(int size);

/// @brief Создание обьекта типа Song
/// 
/// @param size размер массива
/// 
/// @return Указатель на первый (или единственный) элемент
Song* DemoSong(int size);

/// @brief Создание обьекта типа Subject
/// 
/// @param size размер массива
/// 
/// @return Указатель на первый (или единственный) элемент
Subject* DemoSubject(int size);

/// @brief Получение данных для структуры Rectangle
void DemoRectangleInput();

/// @brief Получение данных для структуры Flight
void DemoFlightInput();

/// @brief Получение данных для структуры Film
void DemoFilmInput();

/// @brief Получение данных для структуры Time
void DemoTimeInput();

/// @brief Получение данных для структуры Contact
void DemoContactInput();

/// @brief Получение данных для структуры Song
void DemoSongInput();

/// @brief Получение данных для структуры Subject
void DemoSubjectInput();
#endif