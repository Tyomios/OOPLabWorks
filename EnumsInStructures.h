#pragma once
#ifndef _H_ENUMSINSTRUCTURES_CCCA12
#define _H_ENUMSINSTRUCTURES_CCCA12
#include "Constructors.h"
#include "Enumerate.h"
#include <iostream>

struct Movie
{
	std::string Name;
	int TimeInMinutes;
	int Year;
	Style Style;
	double Rating;
};

/// @brief Создает массив из 3х элементов типа Film
Film* DemoMovieWithGenre();

/// @brief Подсчет количества фильмов указанного жанра
/// 
/// @param films Указатель на массив
/// @param size Размер массива
/// @param style Жанр
/// 
/// @return Число найденный фильмов
int CountMoviesByGenre(Film* films, int size, Style style);

/// @brief Поиск обьекта с наивысшим рейтингом
/// и соответствующим жанром
/// 
/// @param films Указатель на массив
/// @param size Размер массива
/// @param style Жанр фильмов
/// 
/// @return Указатель на найденный фильм
Film* FindBestFilm(Film* films, int size, Style style);
#endif