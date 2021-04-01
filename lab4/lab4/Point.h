#pragma once
#ifndef _H_POINT_CCAC2
#define _H_POINT_CCAC2

/// @brief �����
class Point
{
private:

	/// @brief ���������� �
	double _x;

	/// @brief ���������� Y
	double _y;

	/// @brief ������ ��� �������� x
	/// 
	/// @param x �������� 
	void SetX(double x);

	/// @brief ������ ��� �������� y
	/// 
	/// @param y ��������  
	void SetY(double y);

public:

	/// @brief ����������� ������
	/// 
	/// @param x �������� ��� �������� �
	/// @param y �������� ��� �������� y
	Point(double x, double y);

	/// @brief ����������� �� ��������� 
	Point();

	/// @brief ������ ��� �������� �
	/// 
	/// @return �������� �������
	double GetX();

	/// @brief ������ ��� �������� y
	/// 
	/// @return �������� �������
	double GetY();
};
#endif