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


struct Flight
{
	std::string Name;
	std::string StartPoint;
	std::string EndPoint;
	Time DepartureTime;
	Time ArrivalTime;
};

/// @brief Функция-конструктор для структуры Flight
/// 
/// @return Инициализированный обьект структуры
Flight* MakeFlight();

/// @brief 
void DemoFlightTime();

/// @brief Подсчет времени полета в минутах
/// 
/// @param flight Используемый обьект типа Flight
/// 
/// @return Целочисленное значение
int GetFlightTimeMinutes(Flight& flight);

/// @brief Функция-сетттер для поля Name
/// 
/// @param time Обьект типа Flight
void SetName(Flight& flight);

/// @brief Функция-сетттер для поля StartPoint
/// 
/// @param time Обьект типа Flight
void SetStartPoint(Flight& flight);

/// @brief Функция-сетттер для поля EndPoint
/// 
/// @param time Обьект типа Flight
void SetEndPoint(Flight& flight);

/// @brief Функция-сетттер для поля DepartureTime
/// 
/// @param time Обьект типа Flight
void SetDepartureTime(Flight& flight);

/// @brief Функция-сетттер для поля ArrivalTime
/// 
/// @param time Обьект типа Flight
void SetArrivalTime(Flight& flight);

/// @brief Функция для сравнения времени прибытия и вылета в минутах
/// 
/// @param flight Обьект типа Flight
///
/// @retval true время прибытия больше времени отправления
/// @retval false все прочие некорректные случаи
/// @return Булево значение
bool CorrectTimeFlightChecker(Flight& flight);

/// @brief Функция-сетттер для поля Year
/// 
/// @param time Обьект типа Time
void SetYear(Time& time);

/// @brief Функция-сетттер для поля Month
/// 
/// @param time Обьект типа Time
void SetMonth(Time& time);

/// @brief Функция-сетттер для поля Day
/// 
/// @param time Обьект типа Time
void SetDay(Time& time);

/// @brief Функция-сетттер для поля Hour
/// 
/// @param time Обьект типа Time
void SetHour(Time& time);

/// @brief Функция-сетттер для поля Minutes
/// 
/// @param time Обьект типа Time
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

void DemoRectangleWithPoint();
#endif