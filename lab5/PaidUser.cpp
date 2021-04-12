#include "PaidUser.h"

void PaidUser::SetPosts(Post* posts, int postsCount)
{
	if (postsCount < 0)
	{
		throw std::exception("Posts count must be more than 0");
	}
	this->_posts = posts;
	this->_postsCount = postsCount;
}

//TODO: Тело класса с новой строки
Post* PaidUser::GetPosts() { return _posts; }

int PaidUser::GetPostsCount() { return _postsCount; }

PaidUser::PaidUser(int id, std::string login, std::string password,
					Post* posts, int postsCount) : User(id, login, password)
{
	SetPosts(posts, postsCount);
}