#include "User.h"

void User::SetId(int id)
{
	this->_id = id;
}

void User::SetLogin(std::string login)
{
	AsseptSymbolsLogin(login);
	this->_login = login;
}

void User::SetPassword(std::string password)
{
	this->_password = password;
}

void User::AsseptSymbolsLogin(std::string login)
{
	char symbols[11]
	{
		'{', '}', '<', '>', '@', '#', '$', '%', '^', ':', '*'
	};
	for (int i = 0; i < login.size(); i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (login[i] == symbols[j])
			{
				throw std::exception("Error. Login can't include "
										"special symbols");
			}
		}
	}
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