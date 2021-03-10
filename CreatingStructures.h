#pragma once
#ifndef _H_CREATINGSTRUCTURES_B0968
#define _H_CREATINGSTRUCTURES_B0968
#include "Enumerate.h"
#include <string>


struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};


struct Flight
{
	std::string StartPoint;
	std::string EndPoint;
	int TimeOfFlightMinutes;
};


struct Film
{
	std::string Name;
	int TimeInMinutes;
	int Year;
	Style Style;
	double Rating;
};


struct Time
{
	int Hours;
	int	Minutes;
	int Seconds;
};


struct Contact
{
	std::string Name;
	//TODO: ������� ����� �������� � int - �� ������ ����. ����������� ����� ������� �� 11 ����, � int ������� ������ 10
	// ���� � ������� �������� �� ������������ �������������� ��������, �� ����� ��������� ��� � string
	int Number;
	bool IsFavorite;
};


struct Song
{
	std::string Name;
	int CountingInSeconds;
	bool IsFavorite;
};


struct Subject
{
	std::string Name;
	int Mark;
	bool IsCertified;
};


/// @brief �������� ������� ���� Rectangle
/// 
/// @param size ������ �������
/// 
/// @return ��������� �� ������ (��� ������������) �������
Rectangle* DemoRectangle(int size);

/// @brief �������� ������� ���� Flight
/// 
/// @param size ������ �������
/// 
/// @return ��������� �� ������ (��� ������������) �������
Flight* DemoFlight(int size);

/// @brief �������� ������� ���� Film
/// 
/// @param size ������ �������
/// 
/// @return ��������� �� ������ (��� ������������) �������
Film* DemoFilm(int size);

/// @brief �������� ������� ���� Time
/// 
/// @param size ������ �������
///
/// @return ��������� �� ������ (��� ������������) �������
Time* DemoTime(int size);

/// @brief �������� ������� ���� Contact
/// 
/// @param size ������ �������
/// 
/// @return ��������� �� ������ (��� ������������) �������
Contact* DemoContact(int size);

/// @brief �������� ������� ���� Song
/// 
/// @param size ������ �������
/// 
/// @return ��������� �� ������ (��� ������������) �������
Song* DemoSong(int size);

/// @brief �������� ������� ���� Subject
/// 
/// @param size ������ �������
/// 
/// @return ��������� �� ������ (��� ������������) �������
Subject* DemoSubject(int size);

/// @brief ��������� ������ ��� ��������� Rectangle
void DemoRectangleInput();

/// @brief ��������� ������ ��� ��������� Flight
void DemoFlightInput();

/// @brief ��������� ������ ��� ��������� Film
void DemoFilmInput();

/// @brief ��������� ������ ��� ��������� Time
void DemoTimeInput();

/// @brief ��������� ������ ��� ��������� Contact
void DemoContactInput();

/// @brief ��������� ������ ��� ��������� Song
void DemoSongInput();

/// @brief ��������� ������ ��� ��������� Subject
void DemoSubjectInput();
#endif