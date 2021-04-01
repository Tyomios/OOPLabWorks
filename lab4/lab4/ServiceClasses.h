#pragma once
#ifndef _H_SERVICECLASSES_BDA44_
#define _H_SERVICECLASSES_BDA44_
#include <exception>

/// @brief Служебный класс для валидации
/// вещественных значений
static class DoubleValidator
{
public:

	/// @brief Проверка на положительное значение
	/// 
	/// @param value проверяемое значение
	///
	/// @retval true Значение положительное
	/// @retval false Значение отрицательное или нуль
	/// 
	/// @return Значение числа
	static bool IsValuePositive(double value);

	/// @brief Проверка числа на принадлежность к интервалу
	/// 
	/// @param value Значение
	/// @param min Нижний порог интервала
	/// @param max Верхний порог интервала
	///
	/// @retval true Значение принадлежит интервалу
	/// @retval false Значение не принадлежит интервалу
	/// @return Принадлежность значения к заданному интервалу
	static bool IsValueInRange(double value, double min, double max);

	/// @brief Генерация исключения, если число отрицательное
	///
	/// @param value Значение
	static void AsseptPositiveValue(double value);

	/// @brief Генерация исключенияб если число не принадлежит интервалу
	/// 
	/// @param value Значение
	/// @param min Нижний порог интервала
	/// @param max Верхний порог интервала
	static void AsseptValueInRange(double value, double min, double max);
};
#endif