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

/// @brief �����
class Song
{
private:
	/// @brief �������� 
	std::string _name;

	/// @brief ����������������� � ��������
	int _continuingInSeconds;

	/// @brief ����
	Genre _genre;
public:

	/// @brief ����������� ������
	/// 
	/// @param name ��������
	/// @param seconds ����������������� � ��������
	/// @param genre ����
	Song(std::string name, int seconds, Genre genre);

	/// @brief ����������� ������ �� ���������
	Song();

	/// @brief ������ ��� �������� ��������
	/// 
	/// @param name �������� 
	void SetSongName(std::string name);

	/// @brief ������ ��� ��������� ��������
	/// 
	/// @return �������� Name
	std::string GetSongName();

	/// @brief ������ ��� �������� �����������������
	/// 
	/// @param seconds �������� 
	void SetContinuingInSeconds(int seconds);

	/// @brief ������ ��� ��������� �����������������
	/// 
	/// @return �������� ContinuingInSeconds
	int GetContinuingInSeconds();

	/// @brief ������ ��� �������� �����
	/// 
	/// @param genre �������� 
	void SetGenre(Genre genre);

	/// @brief ������ ��� ��������� �����
	/// 
	/// @return �������� Genre
	Genre GetGenre();
};
#endif