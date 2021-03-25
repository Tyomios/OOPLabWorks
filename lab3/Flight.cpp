#include "Header files\Flight.h"

bool Flight::CorrectTimeFlightChecker()
{
	const int monthsInYear = 12;
	const int daysInMonth = 30;
	const int hoursInDay = 24;
	const int minutesInHour = 60;
	
	int DepartureTimeInMinutes = (this->_departureTime.GetYear() * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (this->_departureTime.GetMonth()* daysInMonth
			* hoursInDay * minutesInHour)
		+ (this->_departureTime.GetDay()* hoursInDay * minutesInHour)
		+ (this->_departureTime.GetHour()* minutesInHour)
		+ this->_departureTime.GetMinutes();

	int ArrivalTimeInMinutes = (this->_arrivalTime.GetYear() * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (this->_arrivalTime.GetMonth() * daysInMonth
			* hoursInDay * minutesInHour)
		+ (this->_arrivalTime.GetDay()* hoursInDay * minutesInHour)
		+ (this->_arrivalTime.GetHour() * minutesInHour)
		+ this->_arrivalTime.GetMinutes();

	if (ArrivalTimeInMinutes > DepartureTimeInMinutes)
	{
		return true;
	}
	return false;
}

void Flight::SetName(std::string name)
{
	this->_name = name;
}

std::string Flight::GetName()
{
	return this->_name;
}

void Flight::SetStartPoint(std::string startPoint)
{
	this->_startPoint = startPoint;
}

std::string Flight::GetStartPoint()
{
	return this->_startPoint;
}

void Flight::SetEndpoint(std::string endPoint)
{
	this->_endPoint = endPoint;
}

std::string Flight::GetEndPoint()
{
	return this->_endPoint;
}

void Flight::SetDepartureTime(Time* departureTime)
{
	this->_departureTime = *departureTime;
}

Time* Flight::GetDepartureTime()
{
	return &this->_departureTime;
}

void Flight::SetArrivalTime(Time* arrivalTime)
{
	if (CorrectTimeFlightChecker())
	{
		throw std::exception("Arrival time can't be less or equal"
							" departure Time");
	}
	this->_arrivalTime = *arrivalTime;
}

Time* Flight::GetArrivalTime()
{
	return &this->_arrivalTime;
}

Flight::Flight(std::string name, std::string startPoint, std::string endPoint, Time* departureTime, Time* arrivalTime )
{
	SetName(name);
	SetStartPoint(startPoint);
	SetEndpoint(endPoint);
	SetDepartureTime(departureTime);
	SetArrivalTime(arrivalTime);
}

Flight::Flight()
{
	this->_name = " ";
	this->_startPoint = " ";
	this->_endPoint = "  ";
}

//TODO: Не соответсвует заданию: GetFlightTimeMinutes(Flight& flight)
int Flight::GetFlightTimeMinutes()
{
	int timeInMinutes = 0;

	const int monthsInYear = 12;
	const int daysInMonth = 30;
	const int hoursInDay = 24;
	const int minutesInHour = 60;

	int DepartureTimeInMinutes = (this->GetDepartureTime()->GetYear() * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (this->GetDepartureTime()->GetMonth() * daysInMonth
			* hoursInDay * minutesInHour)
		+ (this->GetDepartureTime()->GetDay() * hoursInDay * minutesInHour)
		+ (this->GetDepartureTime()->GetHour() * minutesInHour)
		+ this->GetDepartureTime()->GetMinutes();

	int ArrivalTimeInMinutes = (this->GetArrivalTime()->GetYear() * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (this->GetArrivalTime()->GetMonth() * daysInMonth
			* hoursInDay * minutesInHour)
		+ (this->GetArrivalTime()->GetDay() * hoursInDay * minutesInHour)
		+ (this->GetArrivalTime()->GetHour() * minutesInHour)
		+ this->GetArrivalTime()->GetMinutes();

	timeInMinutes = ArrivalTimeInMinutes - DepartureTimeInMinutes;
	return timeInMinutes;
}
