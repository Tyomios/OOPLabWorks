#include "GeometricProgram.h"


void GeometricProgram::DemoRing()
{
	Point point = Point(12.2, 22.1);
	Ring firstRing = Ring(1.01, 1.1, &point);

	std::cout << "First ring area: " << firstRing.GetArea() << std::endl;
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

void GeometricProgram::DemoCollision()
{
	Rectangle rectangle = Rectangle(200, 200, &Point(1.2, 6.0));
	Rectangle secondRectangle = Rectangle(2, 2, &Point(1.5, 7.0));

	Rectangle nonCrossRectangle = Rectangle(1, 3, &Point(2.3, 0.3));
	Rectangle secondNonCrossRectangle = Rectangle(3, 6, &Point(12.2, 50.4));

	std::cout << "Rectangle parameters: "
		<< rectangle.GetLength() << " x "
		<< rectangle.GetWidth() << "  ("
		<< rectangle.GetCentre()->GetX() << " "
		<< rectangle.GetCentre()->GetY() << ")" << std::endl;

	std::cout << "Second rectangle parameters: "
		<< secondRectangle.GetLength() << " x "
		<< secondRectangle.GetWidth() << "  ("
		<< secondRectangle.GetCentre()->GetX() << " "
		<< secondRectangle.GetCentre()->GetY() << ")" << std::endl;

	if (CollisionManager::IsCollision(rectangle, secondRectangle))
	{
		std::cout << "Rectangle and second rectangle have collision\n"
			<< std::endl;
	}

	std::cout << "Rectangle parameters: "
		<< nonCrossRectangle.GetLength() << " x "
		<< nonCrossRectangle.GetWidth() << "  ("
		<< nonCrossRectangle.GetCentre()->GetX() << " "
		<< nonCrossRectangle.GetCentre()->GetY() << ")" << std::endl;

	std::cout << "Second rectangle parameters: "
		<< secondNonCrossRectangle.GetLength() << " x "
		<< secondNonCrossRectangle.GetWidth() << "  ("
		<< secondNonCrossRectangle.GetCentre()->GetX() << " "
		<< secondNonCrossRectangle.GetCentre()->GetY() << ")" << std::endl;

	if (!CollisionManager::IsCollision(nonCrossRectangle,
		secondNonCrossRectangle))
	{
		std::cout << "Rectangle and second rectangle haven't collision\n"
			<< std::endl;
	}

	Ring ring = Ring(5.4, 12.4, &Point(12.2, 3.4));
	Ring secondRing = Ring(3.4, 10.2, &Point(10.2, 5.1));

	std::cout << "Ring parameters: " << ring.GetInnerRadius()
		<< ",  " << ring.GetOuterRadius() << ", ("
		<< ring.GetCenter()->GetX() << "  " << ring.GetCenter()->GetY()
		<< ") " << std::endl;

	std::cout << "Second ring parameters: "
		<< secondRing.GetInnerRadius() << ",  "
		<< secondRing.GetOuterRadius() << ", ("
		<< secondRing.GetCenter()->GetX() << "  "
		<< secondRing.GetCenter()->GetY()
		<< ") " << std::endl;

	if (CollisionManager::IsCollision(ring, secondRing))
	{
		std::cout << "Rings have collision\n" << std::endl;
	}

	Ring nonCollisionRing = Ring(2.3, 7.0, &Point(0.0, 1.0));
	Ring secondNonCollisionRing = Ring(1.2, 1.5, &Point(12.0, 13.5));

	std::cout << "Ring parameters: " << nonCollisionRing.GetInnerRadius() << ",  "
		<< nonCollisionRing.GetOuterRadius() << ", ("
		<< nonCollisionRing.GetCenter()->GetX() << "  "
		<< nonCollisionRing.GetCenter()->GetY()
		<< ") " << std::endl;

	std::cout << "Second ring parameters: "
		<< secondNonCollisionRing.GetInnerRadius() << ",  "
		<< secondNonCollisionRing.GetOuterRadius() << ", ("
		<< secondNonCollisionRing.GetCenter()->GetX() << "  "
		<< secondNonCollisionRing.GetCenter()->GetY()
		<< ") " << std::endl;

	if (!CollisionManager::IsCollision(nonCollisionRing, secondNonCollisionRing))
	{
		std::cout << "Rings haven't collision" << std::endl;
	}
}

void GeometricProgram::DemoRectangleWithPoint()
{
	double middleX = 0.0;
	double middleY = 0.0;

	Point centres[5];
	centres[0] = Point(3.12, 0.323);
	centres[1] = Point(5.12, 6.323);
	centres[2] = Point(1.12, 0.123);
	centres[3] = Point(41.12, 30.323);
	centres[4] = Point(11.12, 60.323);

	Rectangle rectangles[5];
	rectangles[0] = Rectangle(4, 3, &centres[0]);
	rectangles[1] = Rectangle(5, 4, &centres[1]);
	rectangles[2] = Rectangle(7, 3, &centres[2]);
	rectangles[3] = Rectangle(17, 33, &centres[3]);
	rectangles[4] = Rectangle(37, 23, &centres[4]);

	for (int i = 0; i < 5; i++)
	{
		middleX += rectangles[i].GetCentre()->GetX();
		middleY += rectangles[i].GetCentre()->GetY();
		std::cout << "X = " << rectangles[i].GetCentre()->GetX() << ";  "
			<< "Y = " << rectangles[i].GetCentre()->GetY() << ";  "
			<< "Length = " << rectangles[i].GetLength() << ";  "
			<< "Width = " << rectangles[i].GetWidth() << ";" << std::endl;
	}
	middleX /= 5;
	middleY /= 5;

	std::cout << std::endl;
	std::cout << "Xcenter = " << middleX << ";  "
		<< "Ycenter = " << middleY << std::endl;
}
