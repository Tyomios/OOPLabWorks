#include "CreatingStructures.h"


void WrongPointers()
{
	Flight flight;
	Film move;

	Flight* flightPointer;
	Film* movePointer;

	flightPointer = &flight;
	movePointer = &move;

	//flightPointer = &move ERROR
	//movePointer = &flight ERROR
}
