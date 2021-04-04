#pragma once
#ifndef _H_RING_BEAC23A_
#define _H_RING_BEAC23A_
#include "Point.h"
#include "ServiceClasses.h"
#include <exception>

//TODO: Заголовочные файлы в отделььную папку
/// @brief Кольцо
class Ring
{
private:

	/// @brief Общее число обьектов
	static int AllRingsCount;
	
	/// @brief Внешний радиус
	double _outerRadius;

	/// @brief Внутренний радиус
	double _innerRadius;

	/// @brief Центр 
	Point* _center = nullptr;

	/// @brief Проверка значение на положительный знак
	/// в случае отрицательного значения - выдаст исключение
	void AssertOnPositiveValue(double value);

public:

	/// @brief Получение числа всех обьектов класса Ring
	/// 
	/// @return Число обьектов
	static int GetAllRingsCount();
	
	/// @brief Получение площади кольца
	///
	/// @return Площадь кольца
	double GetArea();
	
	/// @brief Сеттер для внутреннего и внешнего радиусов
	///
	/// @param outerRadius Внешний радиус кольца
	/// @param innerRadius Внутренний радиус кольца
	void SetRadius(double outerRadius, double innerRadius);

	/// @brief Сеттер для центра кольца
	///
	/// @param center Центр кольца
	void SetCenter(Point* center);

	/// @brief Геттер внутреннего радиуса
	///
	/// @return Внутренний радиус
	double GetInnerRadius();

	/// @brief Геттер внешнего радиуса
	///
	/// @return Внешний радиус
	double GetOuterRadius();

	/// @brief Гетер центра кольца
	/// 
	/// @return Центр кольца
	Point* GetCenter();
	
	/// @brief Конструктор класса Ring
	///
	/// @param innerRadius Внутренний радиус
	/// @param outerRadius Внешний радиус
	/// @param center Центр
	Ring(double innerRadius, double outerRadius, Point* center);

	/// @brief Деструктор класса
	~Ring();
};
#endif