#pragma once
#ifndef _H_RING_BEAC23A_
#define _H_RING_BEAC23A_
#include "Point.h"
#include "ServiceClasses.h"
#include <exception>

//TODO: ������������ ����� � ���������� �����
/// @brief ������
class Ring
{
private:

	/// @brief ����� ����� ��������
	static int AllRingsCount;
	
	/// @brief ������� ������
	double _outerRadius;

	/// @brief ���������� ������
	double _innerRadius;

	/// @brief ����� 
	Point* _center = nullptr;

	/// @brief �������� �������� �� ������������� ����
	/// � ������ �������������� �������� - ������ ����������
	void AssertOnPositiveValue(double value);

public:

	/// @brief ��������� ����� ���� �������� ������ Ring
	/// 
	/// @return ����� ��������
	static int GetAllRingsCount();
	
	/// @brief ��������� ������� ������
	///
	/// @return ������� ������
	double GetArea();
	
	/// @brief ������ ��� ����������� � �������� ��������
	///
	/// @param outerRadius ������� ������ ������
	/// @param innerRadius ���������� ������ ������
	void SetRadius(double outerRadius, double innerRadius);

	/// @brief ������ ��� ������ ������
	///
	/// @param center ����� ������
	void SetCenter(Point* center);

	/// @brief ������ ����������� �������
	///
	/// @return ���������� ������
	double GetInnerRadius();

	/// @brief ������ �������� �������
	///
	/// @return ������� ������
	double GetOuterRadius();

	/// @brief ����� ������ ������
	/// 
	/// @return ����� ������
	Point* GetCenter();
	
	/// @brief ����������� ������ Ring
	///
	/// @param innerRadius ���������� ������
	/// @param outerRadius ������� ������
	/// @param center �����
	Ring(double innerRadius, double outerRadius, Point* center);

	/// @brief ���������� ������
	~Ring();
};
#endif