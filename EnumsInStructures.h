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

/// @brief 
Film* DemoMovieWithGenre();

/// @brief 
/// @param films 
/// @param size 
/// @param style 
/// @return 
int CountMoviesByGenre(Film* films, int size, Style style);

/// @brief 
/// @param films 
/// @param size 
/// @param style 
/// @return 
Film* FindBestFilm(Film* films, int size, Style style);
#endif