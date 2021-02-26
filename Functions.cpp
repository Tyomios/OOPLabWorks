#include "Functions.h"
#include <iostream>

double GetPower(double base, int exponent)
{
	double temp = base;
	double answer = 1.0;
	for (int i = 0; i < exponent; i++)
	{
		answer *= temp;
	}
	return answer;
}


void DemoGetPower(double base, int exponent)
{
	std::cout << base << " ^ " << exponent << " = " << GetPower(base, exponent) << std::endl;
}


void RoundToTens(int& value)
{
	int resoult = value / 10;
	int growFactor = value % 10;
	if (growFactor >= 5)
	{
		value = (resoult + 1) * 10;
		return;
	}
	value -= growFactor;
}