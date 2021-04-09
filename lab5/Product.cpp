#include "Product.h"

void Product::SetName(std::string name)
{
	this->_name = name;
}

void Product::SetCost(int cost)
{
	if (cost < 0 || cost > 100000)
	{
		throw std::exception("Cost less than zero or too big");
	}
	this->_cost = cost;
}

void Product::SetCategory(CategoryType category)
{
	this->_category = category;
}

std::string Product::GetName()
{
	return this->_name;
}

int Product::GetCost()
{
	return this->_cost;
}

CategoryType Product::GetCatregory()
{
	return this->_category;
}

Product::Product(std::string name, int cost, CategoryType type)
{
	SetName(name);
	SetCost(cost);
	SetCategory(type);
}

Product::Product() : Product(" ", 0, None) {}
