#include "Common.h"

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
