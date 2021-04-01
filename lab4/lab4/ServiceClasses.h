#pragma once
#ifndef _H_SERVICECLASSES_BDA44_
#define _H_SERVICECLASSES_BDA44_
#include <exception>

/// @brief ��������� ����� ��� ���������
/// ������������ ��������
static class DoubleValidator
{
public:

	/// @brief �������� �� ������������� ��������
	/// 
	/// @param value ����������� ��������
	///
	/// @retval true �������� �������������
	/// @retval false �������� ������������� ��� ����
	/// 
	/// @return �������� �����
	static bool IsValuePositive(double value);

	/// @brief �������� ����� �� �������������� � ���������
	/// 
	/// @param value ��������
	/// @param min ������ ����� ���������
	/// @param max ������� ����� ���������
	///
	/// @retval true �������� ����������� ���������
	/// @retval false �������� �� ����������� ���������
	/// @return �������������� �������� � ��������� ���������
	static bool IsValueInRange(double value, double min, double max);

	/// @brief ��������� ����������, ���� ����� �������������
	///
	/// @param value ��������
	static void AsseptPositiveValue(double value);

	/// @brief ��������� ����������� ���� ����� �� ����������� ���������
	/// 
	/// @param value ��������
	/// @param min ������ ����� ���������
	/// @param max ������� ����� ���������
	static void AsseptValueInRange(double value, double min, double max);
};
#endif