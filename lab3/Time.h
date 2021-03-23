#pragma once
#ifndef _H_TIME_BCAB61_
#define _H_TIME_BCAB61_
#include <exception>

/// @brief ����� 
class Time
{
private:
	/// @brief ���
	int _year;

	/// @brief �����
	int _month;

	/// @brief ����
	int _day;

	/// @brief ���
	int _hour;

	/// @brief ������
	int _minutes;
public:

	/// @brief ������ ��� �������� Year
	/// 
	/// @param year �������� 
	void SetYear(int year);

	/// @brief ������ �������� Year
	/// 
	/// @return �������� Year
	int GetYear();

	/// @brief ������ ��� �������� Month
	/// 
	/// @param month �������� 
	void SetMonth(int month);

	/// @brief ������ �������� Month
	/// 
	/// @return �������� Month
	int GetMonth();
	
	/// @brief ������ ��� �������� Day
	/// 
	/// @param day �������� 
	void SetDay(int day);

	/// @brief ������ �������� Day
	/// 
	/// @return �������� Day
	int GetDay();
	
	/// @brief ������ ��� �������� Hour
	/// 
	/// @param hour �������� 
	void SetHour(int hour);

	/// @brief ������ �������� Hour
	/// 
	/// @return �������� Hour
	int GetHour();

	/// @brief ������ ��� �������� Minutes
	/// 
	/// @param minutes �������� 
	void SetMinutes(int minutes);

	/// @brief ������ �������� Minutes
	/// 
	/// @return �������� Minutes 
	int GetMinutes();

	/// @brief ����������� ������
	/// 
	/// @param year �������� ��� �������� Year
	/// @param month �������� ��� �������� Month
	/// @param day �������� ��� �������� Day
	/// @param hour �������� ��� �������� Hour
	/// @param minutes �������� ��� �������� Minutes
	Time(int year, int month, int day, int hour, int minutes);
};
#endif