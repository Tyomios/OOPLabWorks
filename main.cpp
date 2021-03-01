#include "Menu.h"



enum class MenuList
{
	ExceptionTasks = 1,
	CreatingStructures = 2,
	FunctionsTasks = 3,
	LinksPointersTasks = 4,
	DynamicMemory = 5,
	Exit = 0
};


int main()
{
	while (true)
	{
			std::cout << "1 - 1.1.1(exceptions)\n"
				<< "2 - 1.1.2(creating structures)\n"
				<< "3 - 1.1.3\n"
				<< "4 - 1.1.\n"
				<< "5 - 1.1.\n"
				<< "0 - Exit" << std::endl;

			int userChoose = GetIntValue();

			switch (static_cast<MenuList>(userChoose))
			{
			case MenuList::ExceptionTasks:
			{
				ExceprionMenu();
				break;
			}
			case MenuList::CreatingStructures:
			{
				CreatingStructureMenu();
				break;
			}
			case MenuList::FunctionsTasks:
			{
				
				break;
			}
			case MenuList::LinksPointersTasks:
			{
				break;
			}
			case MenuList::DynamicMemory:
			{

				break;
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