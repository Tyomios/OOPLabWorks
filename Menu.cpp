#include "Menu.h"


void ExceprionMenu()
{
	int userChoose;

	while (true)
	{
		std::cout	<< "1 - 1.1 (exception practice)\n"
					<< "2 - 2.2(try/catch practice)\n"
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
				DemoSort();
					
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

void CreatingStructureMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 1.1 (creating structures)\n"
			<< "2 - 2.2(creating own structures)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			Rectangle rectangle;
			Flight flight;
			Film move;
			Time time;

			std::cout << "All works good" << std::endl;
			system("pause");
			break;
		}
		case 2:
		{
			Contact phone;
			Song song;
			Subject math;
			std::cout << "All works good" << std::endl;
				
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