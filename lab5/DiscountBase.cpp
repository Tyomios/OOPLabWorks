#include "DiscountBase.h"

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

CategoryType DiscountBase::GetCategory()
{
	return this->_category;
}
