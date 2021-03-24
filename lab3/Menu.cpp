#include "Header files/Menu.h"


void ResearchWorkMenu()
{
	enum class Menu
	{
		StructsWithArrayField = 1,
		Aggregation = 2,
		AggregationOtM = 3,
		Exit = 0
	};

	int userChoose;

	while (true)
	{
		std::cout << "1 - Structs with array field\n"
			<< "2 - Aggregation\n"
			<< "3 - Aggregation(One to many)\n"
			<< "0 - Exit" << std::endl;

		userChoose = GetIntValue();
		switch (static_cast<Menu>(userChoose))
		{
		case Menu::StructsWithArrayField:
		{
			StructsWithArrayFieldsMenu();
			break;
		}
		case Menu::Aggregation:
		{
			AggregationMenu();
			break;
		}
		case Menu::AggregationOtM:
		{
			AggregationOtMMenu();
			break;
		}
		case Menu::Exit:
		{
			system("cls");
			return;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
			system("pause");
			break;
		}
		}
		system("cls");
	}
}


void StructsWithArrayFieldsMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 1.1 (books)\n"
			<< "2 - 1.2(route)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			DemoBook();
			system("pause");
			break;
		}
		case 2:
		{
			DemoRoute();
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
			system("pause");
			break;
		}
		}
		system("cls");
	}
}

void AggregationMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 2.1 (Rectangle with point)\n"
			<< "2 - 2.2(Flight with time)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			DemoRectangleWithPoint();
			system("pause");
			break;
		}
		case 2:
		{
			DemoFlightTime();
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
			system("pause");
			break;
		}
		}
		system("cls");
	}
}

void AggregationOtMMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 3.1 (Band)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			DemoBand();
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
			system("pause");
			break;
		}
		}
		system("cls");
	}
}
