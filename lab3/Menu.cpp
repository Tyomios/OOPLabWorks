#include "Menu.h"

void ResearchWorkMenu()
{
	enum class Menu
	{
		StructsWithArrayField = 1,
		Exit = 0
	};

	int userChoose;

	while (true)
	{
		std::cout << "1 - Structs with array field\n"
			<< "2 - 1.2(try/catch practice)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (static_cast<Menu>(userChoose))
		{
		case Menu::StructsWithArrayField:
		{
			StructsWithArrayFieldsMenu();
			break;
		}
		/*case 2:
		{


			system("pause");
			break;
		}*/
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
