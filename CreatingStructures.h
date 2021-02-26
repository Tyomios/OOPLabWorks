#pragma once
#ifndef _H_CREATINGSTRUCTURES_B0968
#define _H_CREATINGSTRUCTURES_B0968

struct Rectangle
{
	double Length;
	double Weight;
	char Color[];
};


struct Flight
{
	char StartPoint[100];
	char EndPoint[100];
	int TimeOfFlightMinutes;
};


struct Film
{
	char Name[30];
	int TimeInMinutes;
	int Year;
	char Style[15];
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
	char Name[30];
	int Number;
	bool IsFavorite;
};


struct Song
{
	char Name[20];
	int CountingInSeconds;
	bool IsFavorite;
};


struct Subject
{
	char Name[20];
	int Mark;
	bool IsCertified;
};
#endif