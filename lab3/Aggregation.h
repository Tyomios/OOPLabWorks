#pragma once
#ifndef _H_AGGREGATION_DBD09_
#define _H_AGGREGATION_DBD09_
#include "Common.h"


struct Point
{
	double X;
	double Y;
};


struct Rectangle
{
	int Length;
	int Width;
	Point Centre;
};


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