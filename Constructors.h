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

/// @brief Функция-конструктор для структуры Circle
/// 
/// @param x координата Х
/// @param y координата Y
/// @param z координата Z
/// @param color Цвет
/// 
/// @return Проинициализированный обьект
Circle* MakeCircle(double x, double y, double z, std::string& color);

/// @brief Функция копирования структуры Circle
/// 
/// @param circle Оригинальная структура
/// 
/// @return Клон исходной структуры
Circle* CopyCircle(Circle* circle);

/// @brief Функция-конструктор для структуры Rectangle
/// 
/// @param length длина 
/// @param weight ширина
/// @param color цвет
/// 
/// @return Проинициализированный обьект
Rectangle* MakeRectangle(double length, double width, std::string& color);

/// @brief Функция копирования структуры Rectangle
/// 
/// @param rectangle Оригинальная структура
/// 
/// @return Клон исходной структуры
Rectangle* CopyRectangle(Rectangle* rectangle);

/// @brief Функция-конструктор для структуры Fligth
/// 
/// @param startPoint Точка вылета
/// @param endPoint Точка прибытия
/// @param time Продолжительность полета в минутах
/// 
/// @return Проинициализированный обьект
Flight* MakeFlight(std::string& startPoint, std::string& endPoint, int time);

/// @brief Функция копирования структуры Fligth
/// 
/// @param flight Оригинальная структура
/// 
/// @return Клон исходной структуры
Flight* CopyFlight(Flight* flight);

/// @brief Функция-конструктор для структуры Film
/// 
/// @param name Название фильма
/// @param time Продолжительность в минутах
/// @param year Год выпуска
/// @param style Жанр
/// @param rating Рейтинг
/// 
/// @return Проинициализированный обьект
Film* MakeFilm(std::string& name, int time, int year, std::string& style, double rating);

/// @brief Функция копирования структуры Film
/// 
/// @param film Оригинальная структура
/// 
/// @return Клон исходной структуры
Film* CopyFilm(Film* film);

/// @brief Функция-конструктор для структуры Time
/// 
/// @param hours Часы 
/// @param minutes Минуты
/// @param seconds Секунды
/// 
/// @return Проинициализированный обьект
Time* MakeTime(int hours, int minutes, int seconds);

/// @brief Функция копирования структуры Time
/// 
/// @param time Оригинальная структура
/// 
/// @return Клон исходной структуры
Time* CopyTime(Time* time);
#endif