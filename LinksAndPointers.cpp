#include "LinksAndPointers.h"

void Foo(double a)
{
	std::cout << "Address of a in Foo(): " << &a << std::endl;
	std::cout << "Value of a in Foo(): " << a << std::endl;
	a = 15.0;
	std::cout << "New value of a in Foo(): " << a << std::endl;
}


void Fooo(double& a)
{
	std::cout << "Address of a in Foo(): " << &a << std::endl;
	std::cout << "Value of a in Foo(): " << a << std::endl;
	a = 15.0;
	std::cout << "New value of a in Foo(): " << a << std::endl;

}



void Foop(double* a)
{
	std::cout << "Address in pointer: " << a << std::endl;
	std::cout << "Address of pointer: " << &a << std::endl;
	std::cout << "Value in pointer address: " << *a << std::endl;
	*a = 15.0;
	std::cout << "New value in pointer address: " << *a << std::endl;

}


void ShowAnswerPoiner()
{
	std::cout << "*x : dereferencing\n"
		<< "int* x : pointer definition\n"
		<< "x * y : multiplication" << std::endl;
}
