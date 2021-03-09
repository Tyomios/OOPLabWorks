#include "EnumsInStructures.h"


Film* DemoMovieWithGenre()
{
	std::string nameFirst = "Birds";
	std::string nameSecond = "Rabbits";
	std::string nameThird = "Humans";
	
	Film* films = new Film[3];

	films[0].Style = Comedy;
	films[0].Rating = 2.4;
	films[0].TimeInMinutes = 34;
	films[0].Name = nameFirst; 

	films[1].Style = Comedy;
	films[1].Rating = 5.6;
	films[1].TimeInMinutes = 1200;
	films[1].Name = nameSecond;

	films[2].Style = Action;
	films[2].Rating = 12.3;
	films[2].TimeInMinutes = 4;
	films[2].Name = nameThird;

	return films;
}


int CountMoviesByGenre(Film* films, int size, Style style)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (films[i].Style == style)
		{
			++count;
		}
	}
	return count;
}


Film* FindBestFilm(Film* films, int size, Style style)
{
	Film* bestFilm = films;
	for (int i = 0; i < size; i++)
	{
		if (films[i].Style == style)
		{
			if (films[i].Rating > bestFilm->Rating)
			{
				bestFilm = &films[i];
			}
		}
	}
	return bestFilm;
}
