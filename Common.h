#pragma once
#ifndef _H_COMMON_CA443
#define _H_COMMON_CA443
#include <iostream>

/// @brief Получение целочисленного значения
///
/// @return Кореектное целочисленное значение
int GetValidValue();

/// @brief Отображение массива с целочисленными значениями
/// 
/// @param data Используемый массив
/// @param size Размер массива
void ShowIntArray(int *data, int size);

/// @brief Отображение массива с вещественными значениями
/// 
/// @param data Используемый массив
/// @param size Размер массива
void ShowDoubleArray(double* data, int size);

/// @brief Вывод значений булевого массива на экран
/// 
/// @param data Массив
/// @param size Длина массива 
void ShowBoolArray(bool* data, int size);

/// @brief Заполнение массива случайными целочисленными значениями
///
/// @param length Длина массива
/// 
/// @return Указатель на первый элемент нового массива
int* CreateIntArray(const int length);

/// @brief Заполнение массива случайными вещественными значениями
/// 
/// @param length Длина массива
/// 
/// @return Указатель на первый элемент
double* CreateDoubleArray(const int length);

/// @brief Заполнение массива булевыми значениями
/// 
/// @param length Длина массива
/// 
/// @return Указатель на первый элемент массива
bool* CreateBoolArray(const int length);
#endif