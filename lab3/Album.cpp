#include "Header files\Album.h"


Album::Album(std::string name, int year, int songsCount, Song* songs)
{
	SetName(name);
	SetYear(year);
	SetSongsCount(songsCount);
	SetSongs(songs);
}

void Album::SetName(std::string name)
{
	this->_name = name;
}

std::string Album::GetName()
{
	return this->_name;
}

void Album::SetYear(int year)
{
	const int secondsInYears = 31536000;
	const int startYear = 1970;
	time_t currentYear = (time(NULL) / secondsInYears) + startYear;

	if (year <= 0 || year > currentYear)
	{
		throw std::exception("Error. Enter correct year");
	}
	this->_year = year;
}

int Album::GetYear()
{
	return this->_year;
}

void Album::SetSongsCount(int songsCount)
{
	if (songsCount <= 0)
	{
		throw std::exception("Number of songs can't be less or"
										" equal zero");
	}
	this->_songsCount = songsCount;
}

int Album::GetSongsCount()
{
	return this->_songsCount;
}

void Album::SetSongs(Song* songs)
{
	this->_songs = songs;
}

Song* Album::GetSongs()
{
	return this->_songs;
}
