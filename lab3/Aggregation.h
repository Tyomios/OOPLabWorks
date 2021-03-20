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


/// @brief ������ ��� ��������� X
/// 
/// @param point ������ ���� Point
void SetX(Point& point);

/// @brief ������ ��� ��������� Y
/// 
/// @param point ������ ���� Point
void SetY(Point& point);

/// @brief �������-����������� ��� ��������� Point
/// 
/// @return ������������������ ������
Point* MakePoint();

/// @brief ������ ��� ��������� Length
///
/// @param rectangle ������ ���� Rectangle
void SetLength(Rectangle& rectangle);

/// @brief ������ ��� ��������� Width
///
/// @param rectangle ������ ���� Rectangle 
void SetWidth(Rectangle& rectangle);

/// @brief ������ ��� ��������� Centre
///
/// @param rectangle ������ ���� Rectangle
void SetCentre(Rectangle& rectangle);

/// @brief �������-����������� ��� ��������� Rectangle
/// 
/// @return ������������������ ������
Rectangle* MakeRectangle();
#endif