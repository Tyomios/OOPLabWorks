#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(int amount)
{
	if (amount <= 0 || amount > 10000)
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
	if (product->GetCatregory() == GetCategory())
	{
		double newCost = 
	}
	return ;
}
