#pragma once
#ifndef _H_STRUCTSANDFUNCTIONS_DD603
#define _H_STRUCTSANDFUNCTIONS_DD603
#include "CreatingStructures.h"
#include "Common.h"
#include <iostream>


/// @brief Отображает параметры обьекта структуры
/// 
/// @param rectangle обьект типа Rectangle 
void WriteRectangle(Rectangle& rectangle);

/// @brief Ввод данных для параметров структуры
/// 
/// @param rectangle обьект типа Rectangle 
void ReadRectangle(Rectangle& rectangle);

/// @brief Ввод и вывод значений для 5 обьектов Rectangle
void DemoReadAndWriteRectangles();

/// @brief Замена значений параметров 2х обьектов между собой
/// 
/// @param firstRectangle первый обьект типа Rectangle
/// @param secondRectangle второй обьект типа Rectangle
void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle);

/// @brief Поиск обьекта с самым большим значением длины
/// 
/// @param rectangles Массив 
/// @param count Длина массива
void FindRectangle(Rectangle* rectangles, int count);

/// @brief Поиск обьекта с наибольшей площадью
/// 
/// @param rectangles Массив
/// @param count Длина массива
void FindMaxRectangle(Rectangle* rectangles, int count);
#endif