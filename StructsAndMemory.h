#pragma once
#ifndef _H_STRUCTSANDMEMORY_E662
#define _H_STRUCTSANDMEMORY_E662
#include "CreatingStructures.h"
#include <iostream>

/// @brief �������� ��������� ����� ���������
void DemoDynamicFlight();

/// @brief �������� ������������� ������� ���� Fligth
void DemoDynamicFligths();


/// @brief ����� ������ ��������� �����
/// 
/// @param flights ��������� �� ������ 
/// @param size ������ �������
void FindShortestFlight(Flight* flights, int size);
#endif