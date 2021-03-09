#pragma once
#ifndef _H_MENU_E0658
#define _H_MENU_E0658
#include "ExсeptionProcessing.h"
#include "CreatingStructures.h"
#include "StructsAndPointers.h"
#include "StructsAndFunctions.h"
#include "StructsAndMemory.h"
#include "Constructors.h"
#include "Enumerate.h"
#include "Common.h"

/// @brief Интерфейс для проверки заданий по обработке исключений
void ExceprionMenu();

/// @brief Интерфейс для проверки заданий по создаию структур
void CreatingStructureMenu();

/// @brief Интерфейс для проверки заданий по создаию структур
void CreatingStructuresMenuAddon();

/// @brief Интерфейс для проверки заданий по работе с указателями 
void StructsAndPointersMenu();

/// @brief Интерфейс для проверки заданий по работе в функциях
void StructsAndFunctionsMenu();

/// @brief Интерфейс для проверки заданий по работе с динамической
/// памятью
void StructsAndMemoryMenu();

/// @brief Интерфейс для проверки заданий по созданию
/// функций-конструкторов
void ConstructorsMenu();

/// @brief Интерфейс для проверки заданий по работе
/// с перечислениями
void EnumerateMenu();

/// @brief Интерфейс для проверки заданий по работе
/// со структурами, имеющими перечисления
void EnumsInStructuresMenu();
#endif