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
	//TODO: RSDN 
	std::cout	<< base << " ^ " << exponent << " = "
				<< GetPower(base, exponent) << std::endl;
}


void RoundToTens(int& value)
{
	//TODO: Грамматическая ошибка имени переменной +
	int result = value / 10;
	int growFactor = value % 10;
	if (growFactor >= 5)
	{
		value = (result + 1) * 10;
		return;
	}
	value -= growFactor;
}