#pragma once
#ifndef _H_POINT_CCAC89
#define _H_POINT_CCAC89

/// @brief �����
class Point
{
private:

	/// @brief ���������� �
	double _x;

	/// @brief ���������� Y
	double _y;
public:

	/// @brief ������ ��� �������� x
	/// 
	/// @param x �������� 
	void SetX(double x);

	/// @brief ������ ��� �������� y
	/// 
	/// @param y ��������  
	void SetY(double y);

	/// @brief ������ ��� �������� �
	/// 
	/// @return �������� �������
	double GetX();

	/// @brief ������ ��� �������� y
	/// 
	/// @return �������� �������
	double GetY();

	/// @brief ����������� ������
	/// 
	/// @param x �������� ��� �������� �
	/// @param y �������� ��� �������� y
	Point(double x, double y);
};
#endif