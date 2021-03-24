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
	Song* _songs = nullptr;
public:

	/// @brief ����������� ������
	/// 
	/// @param name ��������
	/// @param year ��� ������
	/// @param songsCount ���������� �����
	/// @param songs �����
	Album(std::string name, int year, int songsCount, Song* songs);

	/// @brief ����������� �� ���������
	Album();
	
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

	/// @brief ������ ��� ��������� ���������� �����
	/// 
	/// @return �������� SongsCount
	int GetSongsCount();

	/// @brief ������ ��� �����
	/// 
	/// @param songs ������ ������ Song
	/// @param songsCount ���������� �����
	void SetSongs(Song* songs, int songsCount);

	/// @brief ������ ��� ��������� �����
	/// 
	/// @return ��������� �� ������
	Song* GetSongs();
};
#endif