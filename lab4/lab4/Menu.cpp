#include "Menu.h"

void Menu()
{
	int userChoose;
	GeometricProgram* program = new GeometricProgram();
	while (true)
	{
		std::cout << "1 - DemoRing\n"
			<< "2 - DemoCollision\n"
			<< "3 - DemoRectangle\n"
			<< "0 - Exit" << std::endl;

		userChoose = GetIntValue();
		switch (static_cast<enum Menu>(userChoose))
		{
		case Menu::DemoRing:
		{
			program->DemoRing();
			system("pause");
			break;
		}
		case Menu::DemoCollision:
		{
			program->DemoCollision();
			system("pause");
			break;
		}
		case Menu::DemoRectangle:
		{
			program->DemoRectangleWithPoint();
			system("pause");
			break;
		}
		case Menu::Exit:
		{
			delete program;
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
