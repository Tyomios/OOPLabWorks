#pragma once
#ifndef _H_PERCENTDISCOUNT_AD31
#define _H_PERCENTDISCOUNT_AD31
#include "DiscountBase.h"

/// @brief 
class PercentDiscount : public DiscountBase
{
private:

	/// @brief Процент скидки
	int _percent;
public:

	/// @brief Сеттер для скидки в процентах
	/// 
	/// @param percent Размер скидки
	void SetPercent(int percent);

	/// @brief Геттер процента
	/// 
	/// @return размер скидки в процентах
	int GetPercent();

	/// @brief Котструктор
	/// 
	/// @param category Категория 
	/// @param percent Размер скидки в процентах
	PercentDiscount(CategoryType category, int percent);

	/// @brief Рассчет стоимости товара
	/// 
	/// @param product Товар
	///
	/// @return Стоимость товара
	double Calculate(Product* product) override;
};
#endif