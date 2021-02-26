#pragma once
#ifndef _H_CREATINGSTRUCTURES_B0968
#define _H_CREATINGSTRUCTURES_B0968
#include <string>


struct Rectangle
{
	double Length;
	double Weight;
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
	std::string Style;
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


void DemoRectangle();


void DemoFlight();


void DemoFilm();


void DemoTime();


void DemoContact();


void DemoSong();


void DemoSubject();
#endif