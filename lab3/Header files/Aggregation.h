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


struct Flight
{
	std::string Name;
	std::string StartPoint;
	std::string EndPoint;
	Time DepartureTime;
	Time ArrivalTime;
};

/// @brief �������-����������� ��� ��������� Flight
/// 
/// @return ������������������ ������ ���������
Flight* MakeFlight();

/// @brief 
void DemoFlightTime();

/// @brief ������� ������� ������ � �������
/// 
/// @param flight ������������ ������ ���� Flight
/// 
/// @return ������������� ��������
int GetFlightTimeMinutes(Flight& flight);

/// @brief �������-������� ��� ���� Name
/// 
/// @param time ������ ���� Flight
void SetName(Flight& flight);

/// @brief �������-������� ��� ���� StartPoint
/// 
/// @param time ������ ���� Flight
void SetStartPoint(Flight& flight);

/// @brief �������-������� ��� ���� EndPoint
/// 
/// @param time ������ ���� Flight
void SetEndPoint(Flight& flight);

/// @brief �������-������� ��� ���� DepartureTime
/// 
/// @param time ������ ���� Flight
void SetDepartureTime(Flight& flight);

/// @brief �������-������� ��� ���� ArrivalTime
/// 
/// @param time ������ ���� Flight
void SetArrivalTime(Flight& flight);

/// @brief ������� ��� ��������� ������� �������� � ������ � �������
/// 
/// @param flight ������ ���� Flight
///
/// @retval true ����� �������� ������ ������� �����������
/// @retval false ��� ������ ������������ ������
/// @return ������ ��������
bool CorrectTimeFlightChecker(Flight& flight);

/// @brief �������-������� ��� ���� Year
/// 
/// @param time ������ ���� Time
void SetYear(Time& time);

/// @brief �������-������� ��� ���� Month
/// 
/// @param time ������ ���� Time
void SetMonth(Time& time);

/// @brief �������-������� ��� ���� Day
/// 
/// @param time ������ ���� Time
void SetDay(Time& time);

/// @brief �������-������� ��� ���� Hour
/// 
/// @param time ������ ���� Time
void SetHour(Time& time);

/// @brief �������-������� ��� ���� Minutes
/// 
/// @param time ������ ���� Time
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

void DemoRectangleWithPoint();
#endif