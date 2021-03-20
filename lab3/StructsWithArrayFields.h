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
	int AuthorsCount;
	std::string* Authors = new std::string[AuthorsCount];
};

/// @brief ���������� ������� ��������� Book
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
#endif