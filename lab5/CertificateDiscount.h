#pragma once
#ifndef _H_CERTIFICATEDICSOUNT_BBBE6
#define _H_CERTIFICATEDICSOUNT_BBBE6
#include "DiscountBase.h"

/// @brief Скидка по сертификату
class CertificateDiscount : public DiscountBase
{
private:

	/// @brief Размер сертификата в рублях
	int _amount;
public:

	/// @brief Сеттер размера сертификата
	/// 
	/// @param amount Размер сертификата
	void SetAmount(int amount);

	/// @brief Геттер размера сертификата
	/// 
	/// @return Размер сертификата
	int GetAmount();

	/// @brief Конструктор
	/// 
	/// @param category Категория товара
	/// @param amount Размер сертификата
	CertificateDiscount(CategoryType category, int amount);

	/// @brief Подсчет стоимости товара
	/// 
	/// @param product Товар
	/// @return Стоимость товара
	double Calculate(Product* product) override;
};
#endif