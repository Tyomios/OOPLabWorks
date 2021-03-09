#pragma once
#ifndef _H_STRUCTSANDMEMORY_E662
#define _H_STRUCTSANDMEMORY_E662
#include "CreatingStructures.h"
#include <iostream>

/// @brief Создание структуры через указатель
void DemoDynamicFlight();

/// @brief Создание динамического массива типа Fligth
void DemoDynamicFligths();


/// @brief Поиск самого короткого рейса
/// 
/// @param flights Указатель на массив 
/// @param size Размер массива
void FindShortestFlight(Flight* flights, int size);
#endif