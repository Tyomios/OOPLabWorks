#pragma once
#ifndef _H_COMMON_CA443
#define _H_COMMON_CA443
#include <iostream>

/// @brief ��������� �������������� ��������
///
/// @return ���������� ������������� ��������
int GetValidValue();

/// @brief ����������� ������� � �������������� ����������
/// 
/// @param data ������������ ������
/// @param size ������ �������
void ShowIntArray(int *data, int size);

/// @brief ����������� ������� � ������������� ����������
/// 
/// @param data ������������ ������
/// @param size ������ �������
void ShowDoubleArray(double* data, int size);

/// @brief ����� �������� �������� ������� �� �����
/// 
/// @param data ������
/// @param size ����� ������� 
void ShowBoolArray(bool* data, int size);

/// @brief ���������� ������� ���������� �������������� ����������
///
/// @param length ����� �������
/// 
/// @return ��������� �� ������ ������� ������ �������
int* CreateIntArray(const int length);

/// @brief ���������� ������� ���������� ������������� ����������
/// 
/// @param length ����� �������
/// 
/// @return ��������� �� ������ �������
double* CreateDoubleArray(const int length);

/// @brief ���������� ������� �������� ����������
/// 
/// @param length ����� �������
/// 
/// @return ��������� �� ������ ������� �������
bool* CreateBoolArray(const int length);
#endif