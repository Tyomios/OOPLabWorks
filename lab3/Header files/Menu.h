#pragma once
#ifndef _H_MENU_1234B_
#define _H_MENU_1234B_
#include "StructsWithArrayFields.h"
#include "Aggregation.h"
#include "AggregationOneToMany.h"

/// @brief Интерфейс для выбора заданий для проверки
void ResearchWorkMenu();

/// @brief Интерфейс для проверки заданий по структурам
void StructsWithArrayFieldsMenu();

/// @brief Интерфейс для проверки заданий по теме агрегирование
void AggregationMenu();

/// @brief Интерфейс для проверки заданий по теме
/// агрегирование "один ко многим"
void AggregationOtMMenu();
#endif