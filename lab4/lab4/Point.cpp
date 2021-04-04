#include "Point.h"

void Point::SetX(double x)
{
	this->_x = x;
}

void Point::SetY(double y)
{
	this->_y = y;
}

double Point::GetX()
{
	return this->_x;
}

double Point::GetY()
{
	return this->_y;
}

Point::Point(double x, double y)
{
	SetX(x);
	SetY(y);
}

//TODO: Реализовать конструктор без параметров на основе предыдущего конструктора с помощью this+
//Point::Point() : Point(0.0, 0.0){} - вот так
Point::Point() 
{
	Point(0.0, 0.0);
}