#pragma once
#ifndef _H_RECTANGLE_AAAD3
#define _H_RECTANGLE_AAAD3
#include "Point.h"

#include <exception>
/// @brief ������������� 
class Rectangle
{
private:
	/// @brief ����� 
	int _length;
	/// @brief ������
	int _width;
	/// @brief ����� ��������������
	Point* _centre;
public:

	/// @brief ������ ��� �������� length
	/// 
	/// @param length �������� 
	void SetLength(int length);

	/// @brief ������ ��� �������� width
	/// 
	/// @param width �������� 
	void SetWidth(int width);

	/// @brief ������ ��� �������� centre
	/// 
	/// @param centre �������� 
	void SetCentre(Point* centre);

	/// @brief ������ �������� length
	/// 
	/// @return �������� length
	int GetLength();

	/// @brief ������ �������� width
	/// 
	/// @return �������� width
	int GetWidth();

	/// @brief ������ �������� centre
	/// 
	/// @return �������� centre
	Point* GetCentre();

	/// @brief ����������� ������
	/// 
	/// @param length �������� ��� �����
	/// @param width �������� ��� ������
	/// @param centre �������� ��� ������
	Rectangle(int length, int width, Point* centre);
};

#endif