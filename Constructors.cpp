#include "Constructors.h"


Circle* MakeCircle(double x, double y, double z, std::string& color)
{
    Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Z = z;
	circle->Color = color;

	return circle;
}


Circle* CopyCircle(Circle* circle)
{
	Circle* copyCircle = new Circle;

	copyCircle->X = circle->X;
	copyCircle->Y = circle->Y;
	copyCircle->Z = circle->Z;
	copyCircle->Color = circle->Color;

	return copyCircle;
}


Rectangle* MakeRectangle(double length, double width, std::string& color)
{
	Rectangle* rectangle = new Rectangle;
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;

	return rectangle;
}


Rectangle* CopyRectangle(Rectangle* rectangle)
{
	Rectangle* copyRectangle = new Rectangle;
	copyRectangle->Length = rectangle->Length;
	copyRectangle->Width = rectangle->Width;
	copyRectangle->Color = rectangle->Color;
	
	return copyRectangle;
}


Flight* MakeFlight(std::string& startPoint, std::string& endPoint, int time)
{
	Flight* flight = new Flight;
	flight->StartPoint = startPoint;
	flight->EndPoint = endPoint;
	flight->TimeOfFlightMinutes = time;
	return flight;
}


Flight* CopyFlight(Flight* flight)
{
	Flight* copyFligth = new Flight;
	copyFligth->StartPoint = flight->StartPoint;
	copyFligth->EndPoint = flight->EndPoint;
	copyFligth->TimeOfFlightMinutes = flight->TimeOfFlightMinutes;
	return copyFligth;
}


Film* MakeFilm(std::string& name, int time, int year, Style style, double rating)
{
	Film* film = new Film;
	film->Name = name;
	film->Rating = rating;
	film->Style = style;
	film->TimeInMinutes = time;
	film->Year = year;
	return film;
}


Film* CopyFilm(Film* film)
{
	Film* copyFilm = new Film;
	copyFilm->Name = film->Name;
	copyFilm->Rating = film->Rating;
	copyFilm->Year = film->Year;
	copyFilm->Style = film->Style;
	copyFilm->TimeInMinutes = film->TimeInMinutes;
	return copyFilm;
}


Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time;
	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;
	return time;
}


Time* CopyTime(Time* time)
{
	Time* copyTime = new Time;
	copyTime->Hours = time->Hours;
	copyTime->Minutes = time->Minutes;
	copyTime->Seconds = time->Seconds;
	return copyTime;
}
