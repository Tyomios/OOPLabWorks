#include "DiscountBase.h"

void DiscountBase::SetCategory(CategoryType category)
{
	this->_category = category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

CategoryType DiscountBase::GetCategory()
{
	return this->_category;
}
