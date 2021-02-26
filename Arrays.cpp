#include "Arrays.h"
#include <iostream>


void SelectionSort(int* data)
{
	for (int startIndex = 0; startIndex < 9; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < 10; ++currentIndex)
		{
			if (data[currentIndex] < data[smallestIndex])
			{
				smallestIndex = currentIndex;
			}
		}
		std::swap(data[startIndex], data[smallestIndex]);
	}
}


double GetValue()
{
	double value;
	std::cout << "\nEnter searching value:" << std::endl;
	std::cin >> value;

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Error. You need to enter digits (like 1.4 or -6.0).\n";
		return GetValue();
	}

	return value;
}


void SearchValues(double* data)
{
	double searchingValue = GetValue();
	int count = 0;
	for (int i = 0; i < 12; i++)
	{
		if (data[i] > searchingValue)
		{
			++count;
		}

		if (!count)
		{
			std::cout << "Array doesn't include values more than " << searchingValue << std::endl;
			return;
		}

	}
	std::cout << "Elements more than " << searchingValue << ": " << count << std::endl;
}


void SearchValues(char* data, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z' || data[i] >= 'a' && data[i] <= 'z')
		{
			std::cout << data[i] << "  ";
		}
	}
	std::cout << std::endl;
}