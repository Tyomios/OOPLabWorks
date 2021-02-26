#pragma once
#ifndef _H_ARRAYS_D5502_
#define _H_ARRAYS_D5502_

/// @brief Сортировка выбором
///
/// @param data указатель на массив с целочисленными данными
void SelectionSort(int* data);

/// @brief Функция получения корректного значения
///
/// @return корректное число с плавающей точкой 
double GetValue();

/// @brief Поиск значений больше заданного в массиве
///
/// @param data Указатель на массив с вещественными данными
void SearchValues(double* data);

/// @brief Поиск букв латинского алфавита в массиве
///
/// @param data Указатель на массив 
void SearchValues(char* data, int size);
#endif // !_H_ARAYS_D5502_