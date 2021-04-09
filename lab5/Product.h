#pragma once
#ifndef _H_PRODUCT_B447
#define _H_PRODUCT_B447
#include "CategoryType.h"
#include <string>

/// @brief Продукт 
class Product
{
private:

	/// @brief Название
	std::string _name;

	/// @brief Стоимость
	int _cost;

	/// @brief Категория
	CategoryType _category;

	/// @brief Сеттер названия
	/// 
	/// @param name Название
	void SetName(std::string name);

	/// @brief Сеттер стоимости
	/// 
	/// @param cost Стоимость
	void SetCost(int cost);

	/// @brief Сеттер категории
	/// 
	/// @param category Категория
	void SetCategory(CategoryType category);
public:

	/// @brief Геттер названия
	/// 
	/// @return Название
	std::string GetName();

	/// @brief Геттер стоимости
	/// 
	/// @return Стоимость
	int GetCost();

	/// @brief Геттер категории товара
	/// 
	/// @return Категория товара
	CategoryType GetCatregory();

	/// @brief Конструктор без параметров
	Product();

	/// @brief Конструктор
	/// 
	/// @param name Название
	/// @param cost Стоимость
	/// @param type Категория
	Product(std::string name, int cost, CategoryType type);
};
#endif