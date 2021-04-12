#include "Post.h"

void Post::SetTitle(std::string title)
{
	this->_title = title;
}

void Post::SetText(std::string text)
{
	this->_text = text;
}

//TODO: Тело класса с новой строки+
std::string Post::GetTitle()
{
	return _title;
}

std::string Post::GetText()
{
	return _text;
}

Post::Post(std::string title, std::string text)
{
	SetTitle(title);
	SetText(text);
}