#pragma once
#ifndef _H_CERTIFICATEDICSOUNT_BBBE6
#define _H_CERTIFICATEDICSOUNT_BBBE6
#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
private:

	/// @brief Размер сертификата в рублях
	int _amount;
public:

	void SetAmount(int amount);

	int GetAmount();

	CertificateDiscount(CategoryType category, int amount);

	double Calculate(Product* product) override;
};
#endif