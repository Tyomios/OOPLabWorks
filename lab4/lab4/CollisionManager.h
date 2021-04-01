#pragma once
#ifndef _H_COLLISIONMANAGER_24A03
#define _H_COLLISIONMANAGER_24A03
#include "Rectangle.h"
#include "Ring.h"

/// @brief Сервисный класс для проверки пересечений
/// двух обьектов типа прямоугольник или кольцо
static class CollisionManager
{
public:

	/// @brief Проверка переечений прямоугольников
	/// 
	/// @param rectangle Первый прямоугольник
	/// @param secondRectangle Второй прямоугольник
	///
	/// @retval true Пересечение есть
	/// @retval false Пересечения нет
	/// @return Наличие пересечения между прямоугольниками
	static bool IsCollision(Rectangle& rectangle,
						Rectangle& secondRectangle);

	/// @brief Проверка переечений колец
	/// 
	/// @param ring Первое кольцо
	/// @param secondRing Второе кольцо
	///
	/// @retval true Пересечение есть
	/// @retval false Пересечения нет
	/// @return Наличие пересечения между кольцами
	static bool IsCollision(Ring& ring, Ring& secondRing);
};
#endif