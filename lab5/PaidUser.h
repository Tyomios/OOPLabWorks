#pragma once
#ifndef _H_PAIDUSER_ABCA23
#define _H_PAIDUSER_ABCA23
#include "User.h"
#include "Post.h"

/// @brief ������� ������� ������������
class PaidUser : public User
{
	/// @brief �����
	Post* _posts;

	/// @brief ���������� ������
	int _postsCount;

	/// @brief ������ ������
	/// 
	/// @param posts �����
	/// @param postsCount ���������� ������
	void SetPosts(Post* posts, int postsCount);
public:

	/// @brief ������ ������
	/// 
	/// @return �����
	Post* GetPosts();

	/// @brief ������ ���������� ������
	/// 
	/// @return ����������� ������
	int GetPostsCount();

	/// @brief �����������
	/// 
	/// @param id �����
	/// @param login �����
	/// @param password ������
	/// @param posts �����
	/// @param postsCount ���������� ������
	PaidUser(int id, std::string login, std::string password, Post* posts, int postsCount);
};
#endif