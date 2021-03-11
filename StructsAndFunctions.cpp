#include "StructsAndFunctions.h"


void WriteRectangle(Rectangle& rectangle)
{
	std::cout << "Rectangle's parameters: "
		<< rectangle.Length << "x" << rectangle.Width << std::endl;
}


void ReadRectangle(Rectangle& rectangle)
{
	//TODO:Необходима проверка на отрицательные числа+
	std::cout << "Enter rectangle's length" << std::endl;
	rectangle.Length = GetDoubleValue();
	if (rectangle.Length < 0)
	{
		std::cout << "Length can't be less than zero!" << std::endl;
		ReadRectangle(rectangle);
	}
	std::cout << "Enter rectangle's width" << std::endl;
	rectangle.Width= GetDoubleValue();
	while (rectangle.Width < 0)
	{
		std::cout << "Width can't be less than zero!" << std::endl;
		rectangle.Width = GetDoubleValue();
	}
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
	//TODO: Утечка памяти+
	//TODO: повреждение данных +
	Rectangle* maxRectangle = new Rectangle;
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxRectangle->Length)
		{
			maxRectangle->Length = rectangles[i].Length;
			index = i;
		}
	}

	std::cout << "The biggest rectangle's parameters "
		<< "are " << rectangles[index].Length << "x" << rectangles[index].Width
		<< std::endl;

	delete maxRectangle;
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	//TODO: Утечка памяти+
	//TODO: см. выше
	Rectangle* maxRectangle = new Rectangle;
	maxRectangle->Length = rectangles[0].Length;
	maxRectangle->Width = rectangles[0].Width;
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].Length * rectangles[i].Width) 
				> (maxRectangle->Length * maxRectangle->Width))
		{
			maxRectangle->Length = rectangles[i].Length;
			maxRectangle->Width = rectangles[i].Width;
			index = i;
		}
	}

	std::cout << "The biggest rectangle's square "
		<< "is " << rectangles[index].Length * rectangles[index].Width
		<< std::endl;
	
	delete maxRectangle;
}
