#include "Menu.h"
#include <iostream>

void DemoCollision()
{
	Rectangle rectangle = Rectangle(200, 200, &Point(1.2, 6.0));
	Rectangle secondRectangle = Rectangle(2, 2, &Point(1.5, 7.0));

	Rectangle nonCrossRectangle = Rectangle(1, 3, &Point(2.3, 0.3));
	Rectangle secondNonCrossRectangle = Rectangle(3, 6, &Point(12.2, 50.4));

	std::cout	<< "Rectangle parameters: "
				<< rectangle.GetLength() << " x "
				<< rectangle.GetWidth() << "  ("
				<< rectangle.GetCentre()->GetX() << " "
				<< rectangle.GetCentre()->GetY() << ")" << std::endl;

	std::cout	<< "Second rectangle parameters: "
				<< secondRectangle.GetLength() << " x "
				<< secondRectangle.GetWidth() << "  ("
				<< secondRectangle.GetCentre()->GetX() << " "
				<< secondRectangle.GetCentre()->GetY() << ")" << std::endl;
	
	if(CollisionManager::IsCollision(rectangle, secondRectangle))
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