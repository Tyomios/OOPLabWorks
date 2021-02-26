#pragma once
#ifndef _H_DYMANICMEMORY_EA3333
#define _H_DYMANICMEMORY_EA3333

/// @brief Сортировка выбором
///
/// @param data указатель на массив  
void SelectionSort(double* data);

/// @brief Получение целочисленного значения
///
/// @return Кореектное целочисленное значение 
int GetIntValue();

/// @brief Поиск индекса вводомого элемента
///
/// @param data Указатель на массив
void SearchIndex(int* data);

/// @brief Создание массива с целочисленными данными
///
/// @param size Размер массива
///  
/// @return Указатель на массив 
int* MakeRandomArray(int size);

/// @brief Функция создания и заполнения динамического массива
/// целочисленными значениями
/// 
/// @param count Размер массива
/// 
/// @return Указатель на первый элемент массива 
int* ReadArray(int count);

/// @brief Подсчет положительных значений в массиве
/// 
/// @param values Указатель на массив 
/// @param count Размер массива
/// 
/// @return Количество найденных значений
int CountPositiveValues(int* values, int count);
#endif // !_H_LINKSPOINTERS_EA3333