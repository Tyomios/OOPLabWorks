#include "Header files\Rectangle.h"



void Rectangle::SetLength(int length)
{
	if (length <= 0)
	{
		throw std::exception("Length can't be less or equal zero");
	}
	this->_length = length;
}

void Rectangle::SetWidth(int width)
{
	if (width <= 0)
	{
		throw std::exception("Width can't be less or equal zero");
	}
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
	this->_length = 1;
	this->_width = 1;
}
