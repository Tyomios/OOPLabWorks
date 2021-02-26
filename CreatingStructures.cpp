#include "CreatingStructures.h"

void DemoContact()
{
	Contact phone;
	phone.IsFavorite = true;
	phone.Name = "Honne";
}


void DemoFilm()
{
	Film move;
	move.Name = "Cool Move";
	move.Rating = 9.0;
	move.Style = "Love story";
	move.TimeInMinutes = 190;
	move.Year = 2007;
}


void DemoFlight()
{
	Flight flight;
	flight.EndPoint = "Moscow";
	flight.StartPoint = "Tomsk";
	flight.TimeOfFlightMinutes = 300;
}


void DemoRectangle()
{
	Rectangle rectangle;
	rectangle.Color = "Blue";
	rectangle.Length = 4.5;
	rectangle.Weight = 20.3;
}


void DemoSong()
{
	Song song;

	song.CountingInSeconds = 216;
	song.IsFavorite = false;
	song.Name = "IDK";
}


void DemoSubject()
{
	Subject subject;
	subject.Name = "Math";
	subject.IsCertified = true;
	subject.Mark = 5;
}


void DemoTime()
{
	Time clock;

	clock.Hours = 13;
	clock.Minutes = 27;
	clock.Seconds = 54;
}