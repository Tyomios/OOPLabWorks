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
	Song* _songs = nullptr;
public:

	/// @brief Конструктор класса
	/// 
	/// @param name Название
	/// @param year Год выхода
	/// @param songsCount Количество песен
	/// @param songs Песни
	Album(std::string name, int year, int songsCount, Song* songs);

	/// @brief Конструктор по умолчанию
	Album();
	
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

	/// @brief Геттер для получения количества песен
	/// 
	/// @return Значение SongsCount
	int GetSongsCount();

	/// @brief Сеттер для песен
	/// 
	/// @param songs обьект класса Song
	/// @param songsCount количество песен
	void SetSongs(Song* songs, int songsCount);

	/// @brief Геттер для получения песен
	/// 
	/// @return Указатель на массив
	Song* GetSongs();
};
#endif