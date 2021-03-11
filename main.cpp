#include "Menu.h"


enum class MenuList
{
	ExceptionTasks = 1,
	CreatingStructures = 2,
	StructsAndPointers = 3,
	StructsAndFunctions = 4,
	StructsAndMemory = 5,
	Constructors = 6,
	Enums = 7,
	EnumsInStructures = 8,
	Exit = 0
};


int main()
{
	//TODO: В методе main нужно вызывать одну функцию. То есть все это меню перенести в отдельный файл +
	LabWorkMenu();
	return 0;
}