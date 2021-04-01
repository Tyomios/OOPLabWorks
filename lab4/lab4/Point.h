#pragma once
#ifndef _H_POINT_CCAC2
#define _H_POINT_CCAC2

/// @brief Точка
class Point
{
private:

	/// @brief координата Х
	double _x;

	/// @brief координата Y
	double _y;

	/// @brief Сеттер для атрибута x
	/// 
	/// @param x Значение 
	void SetX(double x);

	/// @brief Сеттер для атрибута y
	/// 
	/// @param y Значение  
	void SetY(double y);

public:

	/// @brief Конструктор класса
	/// 
	/// @param x Значение для атрибута х
	/// @param y Значение для атрибута y
	Point(double x, double y);

	/// @brief Конструктор по умолчанию 
	Point();

	/// @brief Геттер для атрибута х
	/// 
	/// @return Значение атриута
	double GetX();

	/// @brief Геттер для атрибута y
	/// 
	/// @return Значение атриута
	double GetY();
};
#endif