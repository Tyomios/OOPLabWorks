#include "DependentFields.h"
#include "../../lab3/Header files/Point.h"

void DemoRing()
{
	/*Point* center = new Point(12.2, 3.4);
	Point* centerSecond = new Point(12.922, 3.403);*/
	Point point = Point();
	Ring firstRing = Ring(3.44, 5.66,&point /*center*/);
	
	std::cout << "First ring area: "<< firstRing.GetArea() << std::endl;

	try
	{
		Ring negativeRing = Ring(-12.0, -3.0, &point/*centerSecond*/);
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Ring errorRing = Ring(10.0, 5.0, &point/*center*/);
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/*delete center;*/
}
