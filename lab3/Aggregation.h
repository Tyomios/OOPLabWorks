#pragma once
#ifndef _H_AGGREGATION_DBD09_
#define _H_AGGREGATION_DBD09_
#include "Common.h"

/// @brief Точка
struct Point
{
	/// @brief координата X
	double X;
	/// @brief координата Y
	double Y;
};

/// @brief Прямоугольник 
struct Rectangle
{
	/// @brief Длина 
	int Length;
	/// @brief Ширина
	int Width;
	/// @brief Центр
	Point Centre;
};

/// @brief Время 
struct Time
{
	/// @brief Год
	int Year;
	/// @brief Месяц
	int Month;
	/// @brief День
	int Day;
	/// @brief Час
	int Hour;
	/// @brief Минуты
	int Minutes;
};

/// @brief 
/// @param time 
void SetYear(Time& time);

/// @brief 
/// @param time 
void SetMonth(Time& time);

/// @brief 
/// @param time 
void SetDay(Time& time);

/// @brief 
/// @param time 
void SetHour(Time& time);

/// @brief 
/// @param time 
void SetMinutes(Time& time);

/// @brief 
/// @param time 
void SetMinutes(Time& time);

/// @brief 
/// @return 
Time* MakeTime();

/// @brief Сеттер для параметра X
/// 
/// @param point Обьект типа Point
void SetX(Point& point);

/// @brief Сеттер для параметра Y
/// 
/// @param point Обьект типа Point
void SetY(Point& point);

/// @brief Функция-конструктор для структуры Point
/// 
/// @return Инициализированный обьект
Point* MakePoint();

/// @brief Сеттер для параметра Length
///
/// @param rectangle Обьект типа Rectangle
void SetLength(Rectangle& rectangle);

/// @brief Сеттер для параметра Width
///
/// @param rectangle Обьект типа Rectangle 
void SetWidth(Rectangle& rectangle);

/// @brief Сеттер для параметра Centre
///
/// @param rectangle Обьект типа Rectangle
void SetCentre(Rectangle& rectangle);

/// @brief Функция-конструктор для структуры Rectangle
/// 
/// @return Инициализированный обьект
Rectangle* MakeRectangle();
#endif