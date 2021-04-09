#pragma once
#ifndef _H_PRODUCT_B447
#define _H_PRODUCT_B447
#include "CategoryType.h"
#include <string>

/// @brief ������� 
class Product
{
private:

	/// @brief ��������
	std::string _name;

	/// @brief ���������
	int _cost;

	/// @brief ���������
	CategoryType _category;

	/// @brief ������ ��������
	/// 
	/// @param name ��������
	void SetName(std::string name);

	/// @brief ������ ���������
	/// 
	/// @param cost ���������
	void SetCost(int cost);

	/// @brief ������ ���������
	/// 
	/// @param category ���������
	void SetCategory(CategoryType category);
public:

	/// @brief ������ ��������
	/// 
	/// @return ��������
	std::string GetName();

	/// @brief ������ ���������
	/// 
	/// @return ���������
	int GetCost();

	/// @brief ������ ��������� ������
	/// 
	/// @return ��������� ������
	CategoryType GetCatregory();

	/// @brief ����������� ��� ����������
	Product();

	/// @brief �����������
	/// 
	/// @param name ��������
	/// @param cost ���������
	/// @param type ���������
	Product(std::string name, int cost, CategoryType type);
};
#endif