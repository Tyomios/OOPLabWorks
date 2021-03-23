#pragma once
#ifndef _H_TIME_BCAB61_
#define _H_TIME_BCAB61_
#include <exception>

/// @brief Время 
class Time
{
private:
	/// @brief Год
	int _year;

	/// @brief Месяц
	int _month;

	/// @brief День
	int _day;

	/// @brief Час
	int _hour;

	/// @brief Минуты
	int _minutes;
public:

	/// @brief Сеттер для атрибута Year
	/// 
	/// @param year Значение 
	void SetYear(int year);

	/// @brief Геттер атрибута Year
	/// 
	/// @return Значение Year
	int GetYear();

	/// @brief Сеттер для атрибута Month
	/// 
	/// @param month Значение 
	void SetMonth(int month);

	/// @brief Геттер атрибута Month
	/// 
	/// @return Значение Month
	int GetMonth();
	
	/// @brief Сеттер для атрибута Day
	/// 
	/// @param day Значение 
	void SetDay(int day);

	/// @brief Геттер атрибута Day
	/// 
	/// @return Значение Day
	int GetDay();
	
	/// @brief Сеттер для атрибута Hour
	/// 
	/// @param hour Значение 
	void SetHour(int hour);

	/// @brief Геттер атрибута Hour
	/// 
	/// @return Значение Hour
	int GetHour();

	/// @brief Сеттер для атрибута Minutes
	/// 
	/// @param minutes Значение 
	void SetMinutes(int minutes);

	/// @brief Геттер атрибута Minutes
	/// 
	/// @return Значение Minutes 
	int GetMinutes();

	/// @brief Конструктор класса
	/// 
	/// @param year Значение для атрибута Year
	/// @param month Значение для атрибута Month
	/// @param day Значение для атрибута Day
	/// @param hour Значение для атрибута Hour
	/// @param minutes Значение для атрибута Minutes
	Time(int year, int month, int day, int hour, int minutes);
};
#endif