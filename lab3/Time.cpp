#include "Header files\Time.h"


void Time::SetYear(int year)
{
	if (year < 0)
	{
		throw std::exception("Error. Year can't be less, than zero");
	}
	this->_year = year;
}

int Time::GetYear()
{
	return this->_year;
}

void Time::SetMonth(int month)
{
	if (month > 12 || month <= 0)
	{
		throw std::exception("Error. Repeat entering a month");
	}
	this->_month = month;
}

int Time::GetMonth()
{
	return this->_month;
}

void Time::SetDay(int day)
{
	if (day <= 0 || day > 30)
	{
		throw std::exception("Error. Repeat entering a day");
	}
	this->_day = day;
}

int Time::GetDay()
{
	return this->_day;
}

void Time::SetHour(int hour)
{
	if (hour < 0 || hour > 24)
	{
		throw std::exception("Error. Repeat entering an hour");
	}
	this->_hour = hour;
}

int Time::GetHour()
{
	return this->_hour;
}

void Time::SetMinutes(int minutes)
{
	if (minutes < 0 || minutes > 60)
	{
		throw std::exception("Error. Repeat entering minutes");
	}
	this->_minutes = minutes;
}

int Time::GetMinutes()
{
	return this->_minutes;
}

Time::Time(int year, int month, int day, int hour, int minutes)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinutes(minutes);
}

Time::Time()
{
	this->_year = 1900;
	this->_month = 1;
	this->_day = 1;
	this->_hour = 1;
	this->_minutes = 0;
}