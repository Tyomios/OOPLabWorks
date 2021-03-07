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

/// @brief 
void DemoEnums();

/// @brief 
/// @param color 
void WriteColor(Color color);

/// @brief 
/// @return 
Color ReadColor();

/// @brief 
/// @param colors 
/// @param size 
/// @return 
int CountRed(Color* colors, int size);

/// @brief 
/// @param color 
/// @param size 
/// @param findedColor 
/// @return 
int CountColor(Color* colors, int size, Color findedColor);
#endif