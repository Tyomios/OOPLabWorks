#include "CollisionManager.h"
//TODO: зачем пустая строка?+
#include <cmath>

bool CollisionManager::IsCollision(Rectangle& rectangle, Rectangle& secondRectangle)
{
	double xCentre = abs(rectangle.GetCentre()->GetX() -
		secondRectangle.GetCentre()->GetX());
	double yCentre = abs(rectangle.GetCentre()->GetY() -
		secondRectangle.GetCentre()->GetY());

	double halfWidthSum = abs(rectangle.GetWidth() -
		secondRectangle.GetWidth()) / 2;
	double halfLengthSum = abs(rectangle.GetLength() -
		secondRectangle.GetLength()) / 2;

	if ((xCentre < halfWidthSum) && (yCentre < halfLengthSum))
	{
		return true;
	}
	return false;
}

bool CollisionManager::IsCollision(Ring& ring, Ring& secondRing)
{
	double dX = abs(ring.GetCenter()->GetX() -
		secondRing.GetCenter()->GetX());

	double dY = abs(ring.GetCenter()->GetY() -
		secondRing.GetCenter()->GetY());

	double hypotenuse = sqrt(dX * dX + dY * dY);

	double outerRadiusSum = ring.GetOuterRadius() + 
					secondRing.GetOuterRadius();

	if (hypotenuse < outerRadiusSum)
	{
		return true;
	}
	return false;
}