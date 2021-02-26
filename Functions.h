#pragma once
#ifndef _H_FUNCTIONS_AC0334
#define _H_FUNCTIONS_AC0334

/// @brief ���������� � �������
///
/// @param base ���������� �������� 
/// @param exponent �������
/// 
/// @return ����������� � ������� (exponent) �������� (base)
double GetPower(double base, int exponent);

/// @brief ����������� ���������� ������� GetPower()
///
/// @param base ���������� �������� 
/// @param exponent �������
void DemoGetPower(double base, int exponent);

/// @brief ������� ���������� ��������
///
/// @param value ������ �� ����������� ��������  
void RoundToTens(int& value);
#endif