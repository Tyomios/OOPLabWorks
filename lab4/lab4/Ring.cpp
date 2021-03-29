#include "Ring.h"

int Ring::AllRingsCount = 0;


void Ring::SetRadius(double outerRadius, double innerRadius)
{
	AssertOnPositiveValue(outerRadius);
	AssertOnPositiveValue(innerRadius);
	
	if (outerRadius <= innerRadius)
	{
		throw std::exception("Inner radius can't be bigger or "
									"equal outer radius");
	}
	this->_innerRadius = innerRadius;
	this->_outerRadius = outerRadius;
}

double Ring::GetInnerRadius()
{
	return this->_innerRadius;
}

double Ring::GetOuterRadius()
{
	return this->_outerRadius;
}

Point* Ring::GetCenter()
{
	return this->_center;
}

void Ring::SetCenter(Point* center)
{
	this->_center = center;
}

void Ring::AssertOnPositiveValue(double value)
{
	if (value <= 0)
	{
		throw std::exception( "Radius can't be less or equal zero");
	}
}

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

double Ring::GetArea()
{
	const double PI = 3.14;
	double outerArea = PI * this->GetOuterRadius() * this->GetOuterRadius();
	double innerArea = PI * this->GetInnerRadius() * this->GetInnerRadius();

	return (outerArea - innerArea);
}

Ring::Ring(double innerRadius, double outerRadius, Point* center)
{
	SetRadius(outerRadius, innerRadius);
	SetCenter(center);
	++AllRingsCount;
}

Ring::~Ring()
{
	--AllRingsCount;
}
