#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(int amount)
{
	if (amount < 0 || amount > 10000)
	{
		throw std::exception("Amount can't be less, than zero "
			"or more, than 10 000");
	}
	this->_amount = amount;
}

int CertificateDiscount::GetAmount()
{
	return this->_amount;
}

CertificateDiscount::CertificateDiscount(CategoryType category, int amount) : DiscountBase(category)
{
	SetAmount(amount);
}

double CertificateDiscount::Calculate(Product* product)
{
	if (GetAmount() == 0)
	{
		return product->GetCost();
	}
	if (product->GetCatregory() == GetCategory())
	{
		if (product->GetCost() < GetAmount())
		{
			SetAmount(GetAmount() - product->GetCost());
			return 0;
		}

		double newCost = product->GetCost() - GetAmount();
		SetAmount(0);
		return newCost;
	}
	return product->GetCost();
}
