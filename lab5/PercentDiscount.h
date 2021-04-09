#pragma once
#ifndef _H_PERCENTDISCOUNT_AD31
#define _H_PERCENTDISCOUNT_AD31
#include "DiscountBase.h"

/// @brief 
class PercentDiscount : public DiscountBase
{
private:

	/// @brief ������� ������
	int _percent;
public:

	/// @brief ������ ��� ������ � ���������
	/// 
	/// @param percent ������ ������
	void SetPercent(int percent);

	/// @brief ������ ��������
	/// 
	/// @return ������ ������ � ���������
	int GetPercent();

	/// @brief �����������
	/// 
	/// @param category ��������� 
	/// @param percent ������ ������ � ���������
	PercentDiscount(CategoryType category, int percent);

	/// @brief ������� ��������� ������
	/// 
	/// @param product �����
	///
	/// @return ��������� ������
	double Calculate(Product* product) override;
};
#endif