#pragma once
#ifndef _H_AGGREGATION_DBD09_
#define _H_AGGREGATION_DBD09_
#include "Common.h"

/// @brief �����
struct Point
{
	/// @brief ���������� X
	double X;
	/// @brief ���������� Y
	double Y;
};

/// @brief ������������� 
struct Rectangle
{
	/// @brief ����� 
	int Length;
	/// @brief ������
	int Width;
	/// @brief �����
	Point Centre;
};

/// @brief ����� 
struct Time
{
	/// @brief ���
	int Year;
	/// @brief �����
	int Month;
	/// @brief ����
	int Day;
	/// @brief ���
	int Hour;
	/// @brief ������
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