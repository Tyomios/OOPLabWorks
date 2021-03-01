#pragma once
#ifndef _H_MENU_E0658
#define _H_MENU_E0658
#include "ExсeptionProcessing.h"
#include "CreatingStructures.h"

/// @brief Интерфейс для проверки заданий по обработке исключений
void ExceprionMenu();

/// @brief Интерфейс для проверки заданий по создаию структур
void CreatingStructureMenu();

/// @brief Получение целоочисленного значения с защитой
//
/// @return Корректное целочисленное значение
int GetIntValue();
#endif