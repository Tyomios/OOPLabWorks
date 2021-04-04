#include "Rectangle.h"

void Rectangle::SetLength(int length)
{
	DoubleValidator::AsseptPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(int width)
{
	DoubleValidator::AsseptPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetCentre(Point* centre)
{
	this->_centre = centre;
}

int Rectangle::GetLength()
{
	return this->_length;
}

int Rectangle::GetWidth()
{
	return this->_width;
}

Point* Rectangle::GetCentre()
{
	return this->_centre;
}

Rectangle::Rectangle(int length, int width, Point* centre)
{
	SetLength(length);
	SetWidth(width);
	SetCentre(centre);
}

Rectangle::Rectangle()
{
	Rectangle(1, 1, nullptr);
}