#include "Menu.h"


void ExceprionMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 1.1 ()\n"
			<< "2 - 2.2(count values in float array, more than user's value)\n"
			<< "3 - 2.3(char array with alphabet chars)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
			case 1:
			{
				DemoSort();
					
				system("pause");
				break;
			}
			case 2:
			{
			
				system("pause");
				break;
			}
			case 3:
			{
			

				system("pause");
				break;
			}
			case 0:
			{
				system("cls");
				return;
			}
			default:
			{
				std::cout << "Unknown command" << std::endl;
			}
		}
		system("cls");
	}
}


int GetIntValue()
{
	int value;
	std::cout << "\nEnter value:" << std::endl;
	std::cin >> value;

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Error. You need to enter digits (like 1.4 or -6.0).\n";
		return GetIntValue();
	}

	return value;
}