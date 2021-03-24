#pragma once
#ifndef _H_RECTANGLE_AAAD3
#define _H_RECTANGLE_AAAD3
#include "Point.h"

#include <exception>
/// @brief Прямоугольник 
class Rectangle
{
private:
	/// @brief Длина 
	int _length;
	/// @brief Ширина
	int _width;
	/// @brief Центр прямоугольника
	Point* _centre;
public:

	/// @brief Сеттер для атрибута length
	/// 
	/// @param length Значение 
	void SetLength(int length);

	/// @brief Сеттер для атрибута width
	/// 
	/// @param width Значение 
	void SetWidth(int width);

	/// @brief Сеттер для атрибута centre
	/// 
	/// @param centre Значение 
	void SetCentre(Point* centre);

	/// @brief Геттер атрибута length
	/// 
	/// @return Значение length
	int GetLength();

	/// @brief Геттер атрибута width
	/// 
	/// @return Значение width
	int GetWidth();

	/// @brief Геттер атрибута centre
	/// 
	/// @return Значение centre
	Point* GetCentre();

	/// @brief Конструктор класса
	/// 
	/// @param length Значение для длины
	/// @param width Значение для ширины
	/// @param centre Значение для центра
	Rectangle(int length, int width, Point* centre);
};

#endif