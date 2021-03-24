#pragma once
#ifndef _H_ALBUM_AC4CA_
#define _H_ALBUM_AC4CA_
#include "Song.h"
#include <ctime>

/// @brief ������
class Album
{
private:
	/// @brief ��������
	std::string _name;

	/// @brief ��� ������
	int _year;

	/// @brief ���������� �����
	int _songsCount;

	/// @brief �����
	Song* _songs = new Song[_songsCount];
public:

	/// @brief ����������� ������
	/// 
	/// @param name ��������
	/// @param year ��� ������
	/// @param songsCount ���������� �����
	/// @param songs �����
	Album(std::string name, int year, int songsCount, Song* songs);

	/// @brief ������ ��� �������� ���� �������
	/// 
	/// @param name �������� 
	void SetName(std::string name);

	/// @brief ������ ��� ��������� ����� �������
	/// 
	/// @return �������� Name
	std::string GetName();

	/// @brief ������ ��� �������� ���� �������
	/// 
	/// @param year �������� 
	void SetYear(int year);

	/// @brief ������ ��� ��������� ���� �������
	/// 
	/// @return �������� Year
	int GetYear();

	
	void SetSongsCount(int songsCount);

	int GetSongsCount();

	void SetSongs(Song* songs);

	Song* GetSongs();
};
#endif