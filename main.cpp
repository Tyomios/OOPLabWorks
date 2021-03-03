#include <iostream>

#include "MenuList.h"


using namespace std;


enum class MenuList
{
	DebugTasks = 1,
	ArrayTasks = 2,
	FunctionsTasks = 3,
	LinksPointersTasks = 4,
	DynamicMemory = 5,
	Exit = 0
};


int main()
{
	while (true)
	{
		cout << "1 - 1.1.1\n"
			<< "2 - 1.1.2\n"
			<< "3 - 1.1.3\n"
			<< "4 - 1.1.4\n"
			<< "5 - 1.1.5\n"
			<< "0 - Exit" << endl;

		int userChoose = GetValidValue();

		switch (static_cast<MenuList>(userChoose))
		{
			case MenuList::DebugTasks:
			{
				ShowAnswer();
				system("pause");
				break;
			}
			case MenuList::ArrayTasks:
			{
				ArrayTasks();
				break;
			}
			case MenuList::FunctionsTasks:
			{
				FunctionsTasks();
				break;
			}
			case MenuList::LinksPointersTasks:
			{
				LinksAndPointersTasks();
				break;
			}
			case MenuList::DynamicMemory:
			{
				DynamicMemoryTasks();
				break;
			}
			case MenuList::Exit:
			{
				system("cls");
				return 0;
			}
			default:
			{
				cout << "Unknown program." << endl;
				system("pause");
			}
		}
		system("cls");
	}
}