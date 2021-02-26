#include "DebugAnswers.h"
#include <iostream>


void ShowAnswer()
{
	std::cout << "1.1.1.1 (breakpoint task)" << std::endl;
	std::cout << "sum:\n "
		<< "0.000000000000000\n"
		<< "1.1000000000000001\n"
		<< "3.5200000000000005\n"
		<< "7.5130000000000017\n"
		<< "13.369400000000004\n"
		<< "21.421950000000010\n"
		<< "32.051316000000014\n"
		<< "45.692335700000022\n"
		<< "62.841046180000035" << std::endl;

	std::cout << "1.1.1.2 (breakpoint task for 777 iteration)" << std::endl;
	std::cout << "sum = 3.2624579394327844" << std::endl;
}