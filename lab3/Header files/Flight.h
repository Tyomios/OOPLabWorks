#pragma once
#ifndef _H_FLIGHT_EE23
#define _H_FLIGHT_EE23
#include "Time.h"
#include <string>

/// @brief АвиаРейс 
class Flight
{
private:
	/// @brief Номер рейса
	std::string _name;

	/// @brief Место вылета
	std::string _startPoint;

	/// @brief Место прибытия
	std::string _endPoint;

	/// @brief Время отправления
	Time _departureTime;

	/// @brief Время прибытия
	Time _arrivalTime;

	/// @brief Сравнение времени прибытия и вылета в минутах
	///
	/// @retval true время прибытия больше времени отправления
	/// @retval false все прочие некорректные случаи
	/// @return Булево значение
	bool CorrectTimeFlightChecker();

public:

	/// @brief Сеттер для указания номера рейса
	/// 
	/// @param name Значение 
	void SetName(std::string name);

	/// @brief Геттер для получения номера маршрута
	/// 
	/// @return Значение Name
	std::string GetName();

	/// @brief Сеттер для указания места отправления
	/// 
	/// @param startPoint Значение 
	void SetStartPoint(std::string startPoint);

	/// @brief Геттер для получения места отправления
	/// 
	/// @return Значение StartPoint
	std::string GetStartPoint();

	/// @brief Сеттер для указания места прибытия
	/// 
	/// @param endPoint Значение 
	void SetEndpoint(std::string endPoint);

	/// @brief Геттер для получения места прибытия
	/// 
	/// @return Значение EndPoint
	std::string GetEndPoint();

	/// @brief Сеттер для указания времени отправления
	/// 
	/// @param departureTime Значение 
	void SetDepartureTime(Time* departureTime);

	/// @brief Геттер для получения времени отправления
	/// 
	/// @return Значение DepartureTime
	Time* GetDepartureTime();

	/// @brief Сеттер для указания времени прибытия
	/// 
	/// @param arrivalTime Значение 
	void SetArrivalTime(Time* arrivalTime);

	/// @brief Геттер для получения времени прибытия
	/// 
	/// @return Значение ArrivalTime
	Time* GetArrivalTime();

	/// @brief Конструктор класса
	/// 
	/// @param name Номер рейса
	/// @param startPoint Место отправления
	/// @param endPoint Место прибытия
	/// @param arrivalTime Время прибытия
	/// @param departureTime Время отправления
	Flight(std::string name, std::string startPoint, std::string endPoint,
		Time* departureTime, Time* arrivalTime);

	/// @brief Конструктор по умолчанию
	Flight();

	int GetFlightTimeMinutes();
};
#endif