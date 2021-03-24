#include "Header files\Common.h"

int GetIntValue()
{
	int value;
	std::cout << "\n>" << std::endl;

	if (!(std::cin >> value) || std::cin.get() != '\n')
	{
		std::cin.sync();
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Error. You need to enter digits (like 1 or -6).\n";
		return GetIntValue();
	}

	return value;
}

double GetDoubleValue()
{
	double value;
	std::cout << "\n>:" << std::endl;
	std::cin >> value;

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Error. You need to enter digits (like 1.4 or -6.0).\n";
		return GetDoubleValue();
	}

	return value;
}
