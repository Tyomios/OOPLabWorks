#pragma once
#ifndef _H_BAND_E430_
#define _H_BAND_E430_
#include "Album.h"

/// @brief ������
class Band
{
private:

	/// @brief �������� ������
	std::string _name;

	/// @brief ��������� 
	std::string _content;

	/// @brief ��������� ��������
	int _albumsCount;

	/// @brief �������
	Album* _albums = nullptr;

public:

	/// @brief ����������� ������
	/// 
	/// @param name �������� ������
	/// @param content ���������
	/// @param albumsCount ���������� ��������
	/// @param albums ������ ��������
	Band(std::string name, std::string content, int albumsCount, Album* albums);

	/// @brief ����������� �� ���������
	Band();

	/// @brief ������ ��� �������� �������� ������
	/// 
	/// @param name �������� 
	void SetName(std::string name);

	/// @brief ������ ��� ��������� �������� ������
	/// 
	/// @return �������� Name
	std::string GetName();

	/// @brief ������ ��� �������� ���������
	/// 
	/// @param content �������� 
	void SetContent(std::string content);

	/// @brief ������ ��� ��������� ��������� 
	/// 
	/// @return �������� Content
	std::string GetContent();

	/// @brief ������ ��� �������� ��������
	/// 
	/// @param albums ��������� �� ������ ��������
	/// @param albumsCount ����� ��������
	void SetAlbums(Album* albums, int albumsCount);

	/// @brief ������ ��� ��������� ����� ��������
	/// 
	/// @return �������� AlbumsCount
	int GetAlbumsCount();

	/// @brief ������ ��� ��������� ������� ��������
	/// 
	/// @return �������� Albums
	Album* GetAlbums();

	/// @brief ����� ����� � �������� �� ��������
	///
	/// @param songTitle �������� �����
	///
	/// @retval nullptr ����� �� ������� 
	/// @retern ����� �����
	Song* FindSong(std::string songTitle);

	/// @brief ����� ������� �� ������� �����
	///
	/// @param song ��������� �� �����
	///
	/// @retval nullptr ������ �� ������
	/// @return ����� �������
	Album* FindAlbum(Song* song);

	/// @brief ��������� ������� �� ���� ����� ������
	///
	/// @param allSongsCount ���������� ���� ����� ������
	///
	/// @return ��������� �� ������ 
	Song* GetAllSongs(int &allSongsCount);

	/// @brief ��������� ������� �� ���� ����� ������
	/// ���������� �����
	///
	/// @param allSongsCount ���������� ���� ����� ������
	/// @param genre ����
	///
	/// @return ��������� �� ������ 
	Song* GetAllGenreSongs(int& allSongsCount, Genre genre);
};
#endif