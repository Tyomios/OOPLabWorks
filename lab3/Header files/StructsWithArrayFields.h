#pragma once
#ifndef _H_STRUCTSWITHARRAYFIELDS_DDAB02C
#define _H_STRUCTSWITHARRAYFIELDS_DDAB02C
#include "Common.h"
#include <iostream>
#include <string>
#include <ctime>


struct Book
{
	std::string Name;
	int Year;
	int PagesCount;
	int AuthorsCount = 10;
	std::string* Authors = new std::string[AuthorsCount];
};


struct Route
{
	int Number;
	int ContinuingInMinutes;
	int Interval;
	int HaltCount = 10;
	std::string* Halts = new std::string[HaltCount];
};

/// @brief ������ �� ���������� Book
void DemoBook();

/// @brief ������ ����� ��������� Book � ����������
/// 
/// @param book ������ ���� Book
void ReadBookFromConsole(Book& book);

/// @brief ����� ������ ������� �� �����
/// 
/// @param book ������ ���� Book
void WriteBookToConsole(Book& book);

/// @brief ����� ������� ����� �� ������
/// 
/// @param books ������ ����
/// @param booksCount ���������� ���� � �������
/// @param author �����
///
/// @retval -1 �� ������� �� ����� ����� � ��������� �������
/// @return ������ ������ ��������� ����� � ���������� �������
int FindBookByAuthor(Book* books, int booksCount, std::string author);

/// @brief ������������� ����� ��������� ����� �������
/// 
/// @param route ����������������� ������
void ReadRouteFromConsole(Route& route);

/// @brief ����� ������ ������� �� �����
/// 
/// @param route ������ ���� Route
void WriteRouteToConsole(Route& route);

/// @brief ����� �������� �� ���������� ������
/// 
/// @param routes ������ ���������
/// @param routesCount ���������� ���������
/// @param halt ������� �����
///
/// @retval -1 ������� � ��������� ������ �� ������
/// @return ������ �������� � ������� ������
int FindRouteTo(Route* routes, int routesCount, std::string halt);

/// @brief ������ �� ���������� Route 
void DemoRoute();
#endif