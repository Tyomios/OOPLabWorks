#include "ServiceClasses.h"

bool DoubleValidator::IsValuePositive(double value)
{
	if (value > 0)
	{
		return true;
	}
	return false;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	if (value >= min && value <= max)
	{
		return true;
	}
	return false;
}

void DoubleValidator::AsseptPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw std::exception("Value equal or less, than zero");
	}
}

void DoubleValidator::AsseptValueInRange(double value, double min, double max)
{
	if(!IsValueInRange(value, min, max))
	{
		throw std::exception("Value is out of range");
	}
}
