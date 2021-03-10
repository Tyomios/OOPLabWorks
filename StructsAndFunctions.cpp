#include "StructsAndFunctions.h"


void WriteRectangle(Rectangle& rectangle)
{
	std::cout << "Rectangle's parameters: "
		<< rectangle.Length << "x" << rectangle.Width << std::endl;
}


void ReadRectangle(Rectangle& rectangle)
{
	//TODO:Необходима проверка на отрицательные числа
	std::cout << "Enter rectangle's length" << std::endl;
	rectangle.Length = GetDoubleValue();

	std::cout << "Enter rectangle's widgth" << std::endl;
	rectangle.Width= GetDoubleValue();
}


void DemoReadAndWriteRectangles()
{
	Rectangle rectangles[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << ") ";
		ReadRectangle(rectangles[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		WriteRectangle(rectangles[i]);
	}
}


void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle)
{
	Rectangle temp;
	temp.Length = secondRectangle.Length;
	temp.Width = secondRectangle.Width;
	secondRectangle.Length = firstRectangle.Length;
	secondRectangle.Width = firstRectangle.Width;

	firstRectangle.Length = temp.Length;
	firstRectangle.Width = temp.Width;
}


void FindRectangle(Rectangle* rectangles, int count)
{
	//TODO: Утечка памяти
	Rectangle* maxRectangle = new Rectangle;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxRectangle->Length)
		{
			maxRectangle = &rectangles[i];
		}
	}

	std::cout << "The biggest rectangle's length "
		<< "are " << maxRectangle->Length << "x" << maxRectangle->Width
		<< std::endl;
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	//TODO: Утечка памяти
	Rectangle* maxRectangle = new Rectangle;
	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].Length * rectangles[i].Width) 
				> (maxRectangle->Length * maxRectangle->Width))
		{
			maxRectangle = &rectangles[i];
		}
	}

	std::cout << "The biggest rectangle's square "
		<< "are " << maxRectangle->Length * maxRectangle->Width
		<< std::endl;
}
