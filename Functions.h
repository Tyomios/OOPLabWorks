#pragma once
#ifndef _H_FUNCTIONS_AC0334
#define _H_FUNCTIONS_AC0334

/// @brief Возведение в степень
///
/// @param base Возводимое значение 
/// @param exponent Степень
/// 
/// @return Возведенное в степень (exponent) значение (base)
double GetPower(double base, int exponent);

/// @brief Отображение результата функции GetPower()
///
/// @param base Возводимое значение 
/// @param exponent Степень
void DemoGetPower(double base, int exponent);

/// @brief Функция округления значения
///
/// @param value Ссылка на округляемое значение  
void RoundToTens(int& value);
#endif