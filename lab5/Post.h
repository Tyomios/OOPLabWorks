#pragma once
#ifndef _H_POST_2734B
#define _H_POST_2734B
#include <string>

/// @brief ������
class Post
{
	/// @brief ���������
	std::string _title;

	/// @brief ����������
	std::string _text;
public:

	/// @brief ������ ��� ���������
	/// 
	/// @param title ���������
	void SetTitle(std::string title);

	/// @brief ������ ��� ����������
	/// 
	/// @param text ����������
	void SetText(std::string text);

	/// @brief ������ ��� ���������
	/// 
	/// @return ���������
	std::string GetTitle();

	/// @brief ������ ��� ����������
	/// 
	/// @return ����������
	std::string GetText();

	/// @brief �����������
	/// 
	/// @param title ���������
	/// @param text ����������
	Post(std::string title, std::string text);
};
#endif