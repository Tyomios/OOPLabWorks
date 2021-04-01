#include "DependentFields.h"

void DemoRing()
{
	Point point = Point(12.2, 22.1);
	Ring firstRing = Ring(1.01, 1.1 , &point);
	
	std::cout << "First ring area: "<< firstRing.GetArea() << std::endl;
	std::cout << "Ñount of rings: " << firstRing.GetAllRingsCount() << std::endl;

	try
	{
		Ring negativeRing = Ring(-12.0, -3.0, &point);
		std::cout << "Ñount of rings: " << negativeRing.GetAllRingsCount() << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Ring errorRing = Ring(10.0, 5.0, &point);
		std::cout << "Ñount of rings: " << errorRing.GetAllRingsCount() << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Count of rings before calling constructor: " << Ring::GetAllRingsCount() << std::endl;
	Point examplePoint = Point(25.0, 25.0);
	Ring* ring = new Ring(5.0, 10.0, &examplePoint);
	
	std::cout << "Count of rings after calling constructor: " << Ring::GetAllRingsCount() << std::endl;
	delete ring;
	
	std::cout << "Count of rings after calling destructor: " << Ring::GetAllRingsCount() << std::endl;
}
