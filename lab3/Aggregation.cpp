#include "Aggregation.h"

void SetYear(Time& time)
{
	time.Year = GetIntValue();
	while (time.Year < 0)
	{
		std::cout << "Error. Year can't be less, than zero" << std::endl;
		time.Year = GetIntValue();
	}
}

void SetMonth(Time& time)
{
	time.Month = GetIntValue();
	while (time.Month < 0 || time.Month > 12)
	{
		std::cout << "Error. Repeat entering a month" << std::endl;
		time.Month = GetIntValue();
	}
}

void SetDay(Time& time)
{
	time.Day = GetIntValue();
	while (time.Day < 0 || time.Day > 30)
	{
		std::cout << "Error. Repeat entering a day" << std::endl;
		time.Day = GetIntValue();
	}
}

void SetHour(Time& time)
{
	time.Hour = GetIntValue();
	while (time.Hour < 0 || time.Hour > 24)
	{
		std::cout << "Error. Repeat entering an hour" << std::endl;
		time.Hour = GetIntValue();
	}
}

void SetMinutes(Time& time)
{
	time.Minutes = GetIntValue();
	while (time.Minutes < 0 || time.Minutes > 60)
	{
		std::cout << "Error. Repeat entering minutes" << std::endl;
		time.Minutes = GetIntValue();
	}
}

Time* MakeTime()
{
	Time* time = new Time;
	SetYear(*time);
	SetMonth(*time);
	SetDay(*time);
	SetHour(*time);
	SetMinutes(*time);

	return time;
}

void SetX(Point& point)
{
	point.X = GetDoubleValue();
}

void SetY(Point& point)
{
	point.Y = GetDoubleValue();
}

Point* MakePoint()
{
	Point* point = new Point;
	SetX(*point);
	SetY(*point);

	return point;
}

void SetLength(Rectangle& rectangle)
{
	rectangle.Length = GetIntValue();
	while (rectangle.Length < 0)
	{
		std::cout << "Error, length can't be less, than zero" << std::endl;
		rectangle.Length = GetIntValue();
	}
}

void SetWidth(Rectangle& rectangle)
{
	rectangle.Width = GetIntValue();
	while (rectangle.Width < 0)
	{
		std::cout << "Error, width can't be less, than zero" << std::endl;
		rectangle.Width = GetIntValue();
	}
}

void SetCentre(Rectangle& rectangle)
{
	rectangle.Centre = *MakePoint();
}

Rectangle* MakeRectangle()
{
	Rectangle* rectangle = new Rectangle;
	SetLength(*rectangle);
	SetWidth(*rectangle);
	SetCentre(*rectangle);
	return rectangle;
}

void DemoRectangleWithPoint()
{
	double middleX = 0.0;
	double middleY = 0.0;
	
	Rectangle rectangles[5];
	rectangles[0].Length = 4;
	rectangles[0].Width = 3;
	rectangles[0].Centre.X = 3.12;
	rectangles[0].Centre.Y = 0.323;

	rectangles[1].Length = 5;
	rectangles[1].Width = 4;
	rectangles[1].Centre.X = 5.12;
	rectangles[1].Centre.Y = 6.323;

	rectangles[2].Length = 7;
	rectangles[2].Width = 3;
	rectangles[2].Centre.X = 1.12;
	rectangles[2].Centre.Y = 0.123;

	rectangles[3].Length = 17;
	rectangles[3].Width = 33;
	rectangles[3].Centre.X = 41.12;
	rectangles[3].Centre.Y = 30.123;

	rectangles[4].Length = 37;
	rectangles[4].Width = 23;
	rectangles[4].Centre.X = 11.12;
	rectangles[4].Centre.Y = 60.123;

	for (int i = 0; i < 5; i++)
	{
		middleX += rectangles[i].Centre.X;
		middleY += rectangles[i].Centre.Y;
		std::cout << "X = " << rectangles[i].Centre.X << ";  "
			<< "Y = " << rectangles[i].Centre.Y << ";  "
			<< "Length = " << rectangles[i].Length << ";  "
			<< "Width = " << rectangles[i].Width << ";" << std::endl;
	}
	middleX /= 5;
	middleY /= 5;

	std::cout << "Xcenter = " << middleX << ";  "
				<< "Ycenter = " << middleY << std::endl;
}
