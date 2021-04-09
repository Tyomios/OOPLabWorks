#pragma once
#ifndef _H_DISCOUNTBASE_AA109
#define _H_DISCOUNTBASE_AA109
#include "CategoryType.h"
#include "Product.h"

/// @brief 
class DiscountBase
{
private:

	/// @brief ��������� 
	CategoryType _category;

	/// @brief ������ ���������
	/// 
	/// @param category ���������
	void SetCategory(CategoryType category);

protected:

	/// @brief �����������
	/// 
	/// @param category ���������
	DiscountBase(CategoryType category);

public:

	/// @brief ������ ���������
	/// 
	/// @return ���������
	CategoryType GetCategory();

	/// @brief ������� ��������� ������
	///		����� ���������� ������
	///		
	/// @param product �������
	/// 
	/// @return ��������� ��������
	double virtual Calculate(Product* product) = 0;
};
#endif