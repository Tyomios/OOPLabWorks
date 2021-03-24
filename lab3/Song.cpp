#include "Header files\Song.h"

Song::Song(std::string name, int seconds, Genre genre)
{
	SetSongName(name);
	SetContinuingInSeconds(seconds);
	SetGenre(genre);
}

Song::Song()
{
	this->_name = " ";
	this->_continuingInSeconds = 1;
}

void Song::SetSongName(std::string name)
{
	this->_name = name;
}

std::string Song::GetSongName()
{
	return this->_name;
}

void Song::SetContinuingInSeconds(int seconds)
{
	if (seconds <= 0)
	{
		throw std::exception("Continuing can't be less or"
									" equal zero");
	}
	this->_continuingInSeconds = seconds;
}

int Song::GetContinuingInSeconds()
{
	return this->_continuingInSeconds;
}

void Song::SetGenre(Genre genre)
{
	this->_genre = genre;
}

Genre Song::GetGenre()
{
	return this->_genre;
}
