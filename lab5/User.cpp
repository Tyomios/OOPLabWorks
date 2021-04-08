#include "User.h"

void User::SetId(int id)
{
	_id = id;
}
void User::SetLogin(std::string login)
{
	_login = login;
}
void User::SetPassword(std::string password)
{
	_password = password;
}

int User::GetId() { return _id; }
std::string User::GetLogin() { return _login; }
std::string User::GetPassword() { return _password; }

User::User(int id, std::string login, std::string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

bool User::IsCorrectPassword(std::string password)
{
	return (password == _password);
}