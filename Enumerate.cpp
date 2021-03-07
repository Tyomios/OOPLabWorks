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
