#include "Common.h"


int GetValidValue()
{
	int value;
	std::cout << "\nEnter value:" << std::endl;

	if (!(std::cin >> value) || std::cin.get() != '\n')
	{
		std::cin.sync();
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Error. You need to enter digits (like 1 or -6).\n";
		return GetValidValue();
	}

	return value;
}


void ShowIntArray(int *data , int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << data[i] << "\t";
	}
}


void ShowDoubleArray(double* data, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << data[i] << "\t";
	}
}

void ShowBoolArray(bool* data, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i])
		{
			std::cout << "true ";
		}
		else
		{
			std::cout << "false ";
		}
	}
	std::cout << std::endl;
}


int* CreateIntArray(const int length)
{
	int* data = new int[length];
	srand(-44);

	for (int i = 0; i < length; i++)
	{
		data[i] = rand();
	}
	return data;
}


double* CreateDoubleArray(const int length)
{
	double* data = new double[length];
	srand(-44.5);

	for (int i = 0; i < 12; i++)
	{
		data[i] = (double)rand() / RAND_MAX * (25.0 - 0.01) + 0.01;
	}
	return data;
}


bool* CreateBoolArray(const int length)
{
	bool* data = new bool[length];

	for (int i = 0; i < length; i++)
	{
		data[i] = rand() % 10;
	}
	return data;
}
