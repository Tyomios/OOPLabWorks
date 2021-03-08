#include "Enumerate.h"

void DemoEnums()
{
	Color color = Red;
	WeekDays day = Monday;
	Style style = Thriller;
	StudyFormat format = InPerson;
	Companies company = Apple;
	YearSeasons season = Summer;

	Color colors[6] = {Red, Yellow, Green,
						Blue, Orange, Purple};
	WeekDays days[7] = { Sunday, Monday, Tuesday,
						Wednesday, Thursday, Friday, Saturday };

	Style styles[4] = { Drama, Horror, Thriller, Trailer };

	StudyFormat formats[3] = {InPerson, Online, Night};

	Companies companies[4] = { Apple, Google, LG, Samsung };

	YearSeasons seasons[4] = { Summer, Spring, Autumn, Winter };
}


void WriteColor(Color color)
{
	switch (color)
	{
	case Red:
		{
			std::cout  << "Red color" << std::endl;
			break;
		}
	case Yellow:
		{
		std::cout << "Yellow color" << std::endl;
		break;
		}
	case Blue:
		{
		std::cout << "Blue color" << std::endl;
		break;
		}
	case Green:
		{
		std::cout << "Green color" << std::endl;
		break;
		}
	case Orange:
		{
		std::cout << "Orange color" << std::endl;
		break;
		}
	case Purple:
		{
		std::cout << "Purple color" << std::endl;
		break;
		}
	}
	
}


Color ReadColor()
{
	std::cout << "1 - Red\n 2 - Orange\n 3 - Yellow\n"
		<< "4 - Green\n 5 - Purple" << std::endl;
	int userColor = GetIntValue();

	switch (userColor)
	{
	case 1:
		{
		return Red;
		}
	case 2:
	{
		return Orange;
	}
	case 3:
	{
		return Yellow;
	}
	case 4:
	{
		return Green;
	}
	case 5:
	{
		return Purple;
	}
	}
}


int CountRed(Color* colors, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (colors[i] == Red)
		{
			++count;
		}
	}
	return count;
}


int CountColor(Color* colors, int size, Color findedColor)
{
	int count = 0;
	for (int i =0; i < size; i++)
	{
		if (colors[i] == findedColor)
		{
			++count;
		}
	}
	return count;
}
