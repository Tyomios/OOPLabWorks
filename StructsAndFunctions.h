#pragma once
#ifndef _H_STRUCTSANDFUNCTIONS_DD603
#define _H_STRUCTSANDFUNCTIONS_DD603
#include "CreatingStructures.h"
#include "Common.h"
#include <iostream>


/// @brief ���������� ��������� ������� ���������
/// 
/// @param rectangle ������ ���� Rectangle 
void WriteRectangle(Rectangle& rectangle);

/// @brief ���� ������ ��� ���������� ���������
/// 
/// @param rectangle ������ ���� Rectangle 
void ReadRectangle(Rectangle& rectangle);

/// @brief ���� � ����� �������� ��� 5 �������� Rectangle
void DemoReadAndWriteRectangles();

/// @brief ������ �������� ���������� 2� �������� ����� �����
/// 
/// @param firstRectangle ������ ������ ���� Rectangle
/// @param secondRectangle ������ ������ ���� Rectangle
void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle);

/// @brief ����� ������� � ����� ������� ��������� �����
/// 
/// @param rectangles ������ 
/// @param count ����� �������
void FindRectangle(Rectangle* rectangles, int count);

/// @brief ����� ������� � ���������� ��������
/// 
/// @param rectangles ������
/// @param count ����� �������
void FindMaxRectangle(Rectangle* rectangles, int count);
#endif