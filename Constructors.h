#pragma once
#ifndef _H_CONSTRUCTORS_BB2
#define _H_CONSTRUCTORS_BB2
#include "CreatingStructures.h"

struct Circle
{
	double X;
	double Y;
	double Z;
	std::string Color;
};

/// @brief �������-����������� ��� ��������� Circle
/// 
/// @param x ���������� �
/// @param y ���������� Y
/// @param z ���������� Z
/// @param color ����
/// 
/// @return ��������������������� ������
Circle* MakeCircle(double x, double y, double z, std::string& color);

/// @brief ������� ����������� ��������� Circle
/// 
/// @param circle ������������ ���������
/// 
/// @return ���� �������� ���������
Circle* CopyCircle(Circle* circle);

/// @brief �������-����������� ��� ��������� Rectangle
/// 
/// @param length ����� 
/// @param weight ������
/// @param color ����
/// 
/// @return ��������������������� ������
Rectangle* MakeRectangle(double length, double width, std::string& color);

/// @brief ������� ����������� ��������� Rectangle
/// 
/// @param rectangle ������������ ���������
/// 
/// @return ���� �������� ���������
Rectangle* CopyRectangle(Rectangle* rectangle);

/// @brief �������-����������� ��� ��������� Fligth
/// 
/// @param startPoint ����� ������
/// @param endPoint ����� ��������
/// @param time ����������������� ������ � �������
/// 
/// @return ��������������������� ������
Flight* MakeFlight(std::string& startPoint, std::string& endPoint, int time);

/// @brief ������� ����������� ��������� Fligth
/// 
/// @param flight ������������ ���������
/// 
/// @return ���� �������� ���������
Flight* CopyFlight(Flight* flight);

/// @brief �������-����������� ��� ��������� Film
/// 
/// @param name �������� ������
/// @param time ����������������� � �������
/// @param year ��� �������
/// @param style ����
/// @param rating �������
/// 
/// @return ��������������������� ������
Film* MakeFilm(std::string& name, int time, int year, std::string& style, double rating);

/// @brief ������� ����������� ��������� Film
/// 
/// @param film ������������ ���������
/// 
/// @return ���� �������� ���������
Film* CopyFilm(Film* film);

/// @brief �������-����������� ��� ��������� Time
/// 
/// @param hours ���� 
/// @param minutes ������
/// @param seconds �������
/// 
/// @return ��������������������� ������
Time* MakeTime(int hours, int minutes, int seconds);

/// @brief ������� ����������� ��������� Time
/// 
/// @param time ������������ ���������
/// 
/// @return ���� �������� ���������
Time* CopyTime(Time* time);
#endif