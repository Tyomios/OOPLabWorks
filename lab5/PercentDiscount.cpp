#include "PercentDiscount.h"

void PercentDiscount::SetPercent(int percent)
{
	if (percent < 0 || percent > 100)
	{
		throw std::exception("Discount can't be less, than zero"
							" or bigger, than price");
	}
	this->_percent = percent;
}

int PercentDiscount::GetPercent()
{
	return this->_percent;
}

PercentDiscount::PercentDiscount(CategoryType category, int percent) : DiscountBase(category)
{
	SetPercent(percent);
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCatregory() == GetCategory())
	{
		double discount = product->GetCost() * GetPercent() / 100;
		double newPrice = product->GetCost() - discount;

		return  newPrice;
	}
	return product->GetCost();
}