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


Rectangle* DemoRectangle(int size);


Flight* DemoFlight(int size);


Film* DemoFilm(int size);


Time* DemoTime(int size);


Contact* DemoContact(int size);


Song* DemoSong(int size);


Subject* DemoSubject(int size);


void DemoRectangleInput();


void DemoFlightInput();


void DemoFilmInput();


void DemoTimeInput();


void DemoContactInput();


void DemoSongInput();


void DemoSubjectInput();
#endif