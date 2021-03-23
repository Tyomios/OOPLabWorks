#pragma once
#ifndef _H_FLIGHT_EE23
#define _H_FLIGHT_EE23
#include "Time.h"
#include <string>

class Flight
{
private:
	std::string _name;
	std::string _startPoint;
	std::string _endPoint;
	Time _departureTime;
	Time _arrivalTime;
public:

	void SetName(std::string name);

	std::string GetName();

	void SetStartPoint(std::string startPoint);

	std::string GetStartPoint();

	void SetEndpoint(std::string endPoint);

	void SetDepartureTime(Time* departureTime);

	Time* GetDepartureTime();

	void SetArrivalTime(Time* arrivalTime);

	Time* GetArrivalTime();

	Flight(std::string name, std::string startPoint, std::string endPoint,
		Time* arrivalTime, Time* departureTime);
};
#endif