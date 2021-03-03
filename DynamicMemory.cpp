#include "DynamicMemory.h"
#include "Common.h"

#include <iostream>


void SelectionSort(double* data)
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

//TODO: Название метода не соответсвует его функциональности
//TODO: Метод валидации лучше вынести в  отдельный файл с сервисными 
//функциями, так как этот метод используется не только в этом файле + перенес в common.cpp

void SearchIndex(int* data)
{
	int searchingValue = GetValidValue();
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (data[i] == searchingValue)
		{
			std::cout << "Index:" << i << std::endl;
			++count;
		}
		if (!count)
		{
			std::cout << "Array doesn't include value " << searchingValue << std::endl;
			return;
		}
	}
}


int* MakeRandomArray(int size)
{
	int* data = new int[size];

	for (int i = 0; i < size; i++)
	{
		data[i] = rand() % 100;
	}

	return data;
}

int* ReadArray(int count)
{
	int* values = new int[count];
	for (int i = 0; i < count; i++)
	{
		std::cout << i + 1 << ") element" << std::endl;
		values[i] = GetValidValue();
	}
	return values;
}


int CountPositiveValues(int* values, int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			result++;
		}
	}
	return result;
}