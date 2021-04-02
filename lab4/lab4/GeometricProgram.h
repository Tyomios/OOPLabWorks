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
	/// @brief ������� ��� �������� ������� ������ Ring
	void DemoRing();

	/// @brief ������� ��� ������������ �������� ������������
	void DemoCollision();

	/// @brief ������� ��� �������� ������� ������ Rectangle
	void DemoRectangleWithPoint();
};

#endif