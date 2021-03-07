﻿#include "Menu.h"


enum class MenuList
{
	ExceptionTasks = 1,
	CreatingStructures = 2,
	StructsAndPointers = 3,
	StructsAndFunctions = 4,
	StructsAndMemory = 5,
	Constructors = 6,
	Exit = 0
};


int main()
{
	while (true)
	{
			std::cout << "1 - 1.1.1(exceptions)\n"
				<< "2 - 1.1.2(creating structures)\n"
				<< "3 - 1.1.3(structs and pointers)\n"
				<< "4 - 1.1.4(structs and functions)\n"
				<< "5 - 1.1.5(structs and memory)\n"
				<< "6 - 1.1.6(constructors)\n"
				<< "0 - Exit" << std::endl;

			int userChoose = GetIntValue();

			switch (static_cast<MenuList>(userChoose))
			{
			case MenuList::ExceptionTasks:
			{
				ExceprionMenu();
				system("cls");
				break;
			}
			case MenuList::CreatingStructures:
			{
				CreatingStructureMenu();
				system("cls");
				break;
			}
			case MenuList::StructsAndPointers:
			{
				StructsAndPointersMenu();
				system("cls");
				break;
			}
			case MenuList::StructsAndFunctions:
			{
				StructsAndFunctionsMenu();
				system("cls");
				break;
			}
			case MenuList::StructsAndMemory:
			{
				StructsAndMemoryMenu();
				system("cls");
				break;
			}
			case MenuList::Constructors:
			{
				ConstructorsMenu();
				system("cls");
			}
			case MenuList::Exit:
			{
				system("cls");
				return 0;
			}
			default:
			{
				std::cout << "Unknown program." << std::endl;
				system("pause");
			}
			}
			system("cls");
		}
}