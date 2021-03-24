#pragma once
#ifndef _H_BAND_E430_
#define _H_BAND_E430_
#include "Album.h"

/// @brief Группа
class Band
{
private:

	/// @brief Название группы
	std::string _name;

	/// @brief Аннотация 
	std::string _content;

	/// @brief Кличество альбомов
	int _albumsCount;

	/// @brief Альбомы
	Album* _albums = nullptr;

public:

	/// @brief Конструктор класса
	/// 
	/// @param name Название группы
	/// @param content Аннотация
	/// @param albumsCount Количество альбомов
	/// @param albums Массив альбомов
	Band(std::string name, std::string content, int albumsCount, Album* albums);

	/// @brief Конструктор по умолчанию
	Band();

	/// @brief Сеттер для указания названия группы
	/// 
	/// @param name Значение 
	void SetName(std::string name);

	/// @brief Геттер для получения названия группы
	/// 
	/// @return Значение Name
	std::string GetName();

	/// @brief Сеттер для указания аннотации
	/// 
	/// @param content Значение 
	void SetContent(std::string content);

	/// @brief Геттер для получения аннотации 
	/// 
	/// @return Значение Content
	std::string GetContent();

	/// @brief Сеттер для указания альбомов
	/// 
	/// @param albums указатель на массив альбомов
	/// @param albumsCount число альбомов
	void SetAlbums(Album* albums, int albumsCount);

	/// @brief Геттер для получения числа альбомов
	/// 
	/// @return Значение AlbumsCount
	int GetAlbumsCount();

	/// @brief Геттер для получения массива альбомов
	/// 
	/// @return Значение Albums
	Album* GetAlbums();

	/// @brief Поиск песни в альбомах по названию
	///
	/// @param songTitle Название песни
	///
	/// @retval nullptr Песня не найдена 
	/// @retern Адрес песни
	Song* FindSong(std::string songTitle);

	/// @brief Поиск альбома по наличию песни
	///
	/// @param song Указатель на песню
	///
	/// @retval nullptr Альбом не найден
	/// @return Адрес альбома
	Album* FindAlbum(Song* song);

	/// @brief Получение массива из всех песен группы
	///
	/// @param allSongsCount Количество всех песен группы
	///
	/// @return Указатель на массив 
	Song* GetAllSongs(int &allSongsCount);

	/// @brief Получение массива из всех песен группы
	/// указанного жанра
	///
	/// @param allSongsCount Количество всех песен группы
	/// @param genre Жанр
	///
	/// @return Указатель на массив 
	Song* GetAllGenreSongs(int& allSongsCount, Genre genre);
};
#endif