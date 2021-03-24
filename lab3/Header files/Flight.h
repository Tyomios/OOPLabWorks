#pragma once
#ifndef _H_FLIGHT_EE23
#define _H_FLIGHT_EE23
#include "Time.h"
#include <string>

/// @brief �������� 
class Flight
{
private:
	/// @brief ����� �����
	std::string _name;

	/// @brief ����� ������
	std::string _startPoint;

	/// @brief ����� ��������
	std::string _endPoint;

	/// @brief ����� �����������
	Time _departureTime;

	/// @brief ����� ��������
	Time _arrivalTime;

	/// @brief ��������� ������� �������� � ������ � �������
	///
	/// @retval true ����� �������� ������ ������� �����������
	/// @retval false ��� ������ ������������ ������
	/// @return ������ ��������
	bool CorrectTimeFlightChecker();

public:

	/// @brief ������ ��� �������� ������ �����
	/// 
	/// @param name �������� 
	void SetName(std::string name);

	/// @brief ������ ��� ��������� ������ ��������
	/// 
	/// @return �������� Name
	std::string GetName();

	/// @brief ������ ��� �������� ����� �����������
	/// 
	/// @param startPoint �������� 
	void SetStartPoint(std::string startPoint);

	/// @brief ������ ��� ��������� ����� �����������
	/// 
	/// @return �������� StartPoint
	std::string GetStartPoint();

	/// @brief ������ ��� �������� ����� ��������
	/// 
	/// @param endPoint �������� 
	void SetEndpoint(std::string endPoint);

	/// @brief ������ ��� ��������� ����� ��������
	/// 
	/// @return �������� EndPoint
	std::string GetEndPoint();

	/// @brief ������ ��� �������� ������� �����������
	/// 
	/// @param departureTime �������� 
	void SetDepartureTime(Time* departureTime);

	/// @brief ������ ��� ��������� ������� �����������
	/// 
	/// @return �������� DepartureTime
	Time* GetDepartureTime();

	/// @brief ������ ��� �������� ������� ��������
	/// 
	/// @param arrivalTime �������� 
	void SetArrivalTime(Time* arrivalTime);

	/// @brief ������ ��� ��������� ������� ��������
	/// 
	/// @return �������� ArrivalTime
	Time* GetArrivalTime();

	/// @brief ����������� ������
	/// 
	/// @param name ����� �����
	/// @param startPoint ����� �����������
	/// @param endPoint ����� ��������
	/// @param arrivalTime ����� ��������
	/// @param departureTime ����� �����������
	Flight(std::string name, std::string startPoint, std::string endPoint,
		Time* departureTime, Time* arrivalTime);

	/// @brief ����������� �� ���������
	Flight();

	int GetFlightTimeMinutes();
};
#endif