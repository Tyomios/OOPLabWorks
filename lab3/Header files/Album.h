#pragma once
#ifndef _H_ALBUM_AC4CA_
#define _H_ALBUM_AC4CA_
#include "Song.h"
#include <ctime>

/// @brief Альбом
class Album
{
private:
	/// @brief Название
	std::string _name;

	/// @brief Год выхода
	int _year;

	/// @brief Количество песен
	int _songsCount;

	/// @brief Песни
	Song* _songs = new Song[_songsCount];
public:

	/// @brief Конструктор класса
	/// 
	/// @param name Название
	/// @param year Год выхода
	/// @param songsCount Количество песен
	/// @param songs Песни
	Album(std::string name, int year, int songsCount, Song* songs);

	/// @brief Сеттер для указания имни альбома
	/// 
	/// @param name Значение 
	void SetName(std::string name);

	/// @brief Геттер для получения имени альбома
	/// 
	/// @return Значение Name
	std::string GetName();

	/// @brief Сеттер для указания года выпуска
	/// 
	/// @param year Значение 
	void SetYear(int year);

	/// @brief Геттер для получения года выпуска
	/// 
	/// @return Значение Year
	int GetYear();

	
	void SetSongsCount(int songsCount);

	int GetSongsCount();

	void SetSongs(Song* songs);

	Song* GetSongs();
};
#endif