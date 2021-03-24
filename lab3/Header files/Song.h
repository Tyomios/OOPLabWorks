#pragma once
#ifndef _H_SONG_117A
#define _H_SONG_117A
#include <string>

enum Genre
{
	Rock,
	Pop,
	Rap,
	LoFi,
	Jazz
};

/// @brief Песня
class Song
{
private:
	/// @brief Название 
	std::string _name;

	/// @brief Продолжительность в секундах
	int _continuingInSeconds;

	/// @brief Жанр
	Genre _genre;
public:

	/// @brief Конструктор класса
	/// 
	/// @param name Название
	/// @param seconds Продолжительность в секундах
	/// @param genre Жанр
	Song(std::string name, int seconds, Genre genre);

	/// @brief Конструктор класса по умолчанию
	Song();

	/// @brief Сеттер для указания названия
	/// 
	/// @param name Значение 
	void SetSongName(std::string name);

	/// @brief Геттер для получения названия
	/// 
	/// @return Значение Name
	std::string GetSongName();

	/// @brief Сеттер для указания продолжительности
	/// 
	/// @param seconds Значение 
	void SetContinuingInSeconds(int seconds);

	/// @brief Геттер для получения продолжительности
	/// 
	/// @return Значение ContinuingInSeconds
	int GetContinuingInSeconds();

	/// @brief Сеттер для указания жанра
	/// 
	/// @param genre Значение 
	void SetGenre(Genre genre);

	/// @brief Геттер для получения жанра
	/// 
	/// @return Значение Genre
	Genre GetGenre();
};
#endif