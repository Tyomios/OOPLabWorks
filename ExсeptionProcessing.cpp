#include "ExñeptionProcessing.h"


void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw std::exception("Error: Use count, more than 0");
	}
	
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}


void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	
	try
	{
		Sort(values, count);
		std::cout << "Status: OK" << std::endl;
		
		Sort(values, -1);
	}
	catch (const std::exception &ex)
	{
		std::cout << "Exception catched" << std::endl;
	}
	
}