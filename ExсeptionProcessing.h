#pragma once
#ifndef _H_EXCEPTOINPROCESSING_DD0994
#define _H_EXCEPTOINPROCESSING_DD0994
#include <exception>
#include <iostream>

/// @brief Сортировка массива
/// 
/// @param values Указатель на массив
/// @param count Размер массива
void Sort(double* values, int count);

/// @brief Вызов функции Sort() для демонстрации исключений
void DemoSort();
#endif