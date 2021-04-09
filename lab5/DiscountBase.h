#pragma once
#ifndef _H_DISCOUNTBASE_AA109
#define _H_DISCOUNTBASE_AA109
#include "CategoryType.h"
#include "Product.h"

/// @brief 
class DiscountBase
{
private:

	/// @brief Категория 
	CategoryType _category;

	/// @brief Сеттер категории
	/// 
	/// @param category Категория
	void SetCategory(CategoryType category);

protected:

	/// @brief Конструктор
	/// 
	/// @param category Категория
	DiscountBase(CategoryType category);

public:

	/// @brief Геттер категории
	/// 
	/// @return категория
	CategoryType GetCategory();

	/// @brief Рассчет стоимости товара
	///		после применения скидки
	///		
	/// @param product Продукт
	/// 
	/// @return Стоимость продукта
	double virtual Calculate(Product* product) = 0;
};
#endif