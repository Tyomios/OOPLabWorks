#pragma once
#ifndef _H_CERTIFICATEDICSOUNT_BBBE6
#define _H_CERTIFICATEDICSOUNT_BBBE6
#include "DiscountBase.h"

/// @brief ������ �� �����������
class CertificateDiscount : public DiscountBase
{
private:

	/// @brief ������ ����������� � ������
	int _amount;
public:

	/// @brief ������ ������� �����������
	/// 
	/// @param amount ������ �����������
	void SetAmount(int amount);

	/// @brief ������ ������� �����������
	/// 
	/// @return ������ �����������
	int GetAmount();

	/// @brief �����������
	/// 
	/// @param category ��������� ������
	/// @param amount ������ �����������
	CertificateDiscount(CategoryType category, int amount);

	/// @brief ������� ��������� ������
	/// 
	/// @param product �����
	/// @return ��������� ������
	double Calculate(Product* product) override;
};
#endif