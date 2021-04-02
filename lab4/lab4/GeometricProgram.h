#pragma once
#ifndef _H_GEOMETRICPROGRAM_BDC32
#define _H_GEOMETRICPROGRAM_BDC32
#include "Ring.h"
#include "Rectangle.h"
#include "CollisionManager.h"
#include <iostream>

class GeometricProgram
{
public:
	/// @brief функция для проверки заданий класса Ring
	void DemoRing();

	/// @brief функция для демонстрации рассчета столкновений
	void DemoCollision();

	/// @brief функция для проверки заданий класса Rectangle
	void DemoRectangleWithPoint();
};

#endif