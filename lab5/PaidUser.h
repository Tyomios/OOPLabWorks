#pragma once
#ifndef _H_PAIDUSER_ABCA23
#define _H_PAIDUSER_ABCA23
#include "User.h"
#include "Post.h"

/// @brief Платный аккаунт пользователя
class PaidUser : public User
{
	/// @brief Посты
	Post* _posts;

	/// @brief Количество постов
	int _postsCount;

	/// @brief Сеттер постов
	/// 
	/// @param posts Посты
	/// @param postsCount Количество постов
	void SetPosts(Post* posts, int postsCount);
public:

	/// @brief Геттер постов
	/// 
	/// @return Посты
	Post* GetPosts();

	/// @brief Геттер количества постов
	/// 
	/// @return Колличество постов
	int GetPostsCount();

	/// @brief Конструктор
	/// 
	/// @param id Номер
	/// @param login Логин
	/// @param password Пароль
	/// @param posts Посты
	/// @param postsCount Количество постов
	PaidUser(int id, std::string login, std::string password, Post* posts, int postsCount);
};
#endif