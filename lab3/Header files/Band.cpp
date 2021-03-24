#include "Band.h"

Band::Band(std::string name, std::string content, int albumsCount, Album* albums)
{
	SetName(name);
	SetContent(content);
	SetAlbums(albums, albumsCount);
}

Band::Band()
{
	this->_name = " ";
	this->_content = " ";
}

void Band::SetName(std::string name)
{
	this->_name = name;
}

std::string Band::GetName()
{
	return this->_name;
}

void Band::SetContent(std::string content)
{
	this->_content = content;
}

std::string Band::GetContent()
{
	return this->_content;
}

void Band::SetAlbums(Album* albums, int albumsCount)
{
	if (albumsCount <= 0)
	{
		throw std::exception("Number of albums can't be "
							"less or equal zero");
	}
	this->_albumsCount = albumsCount;
	this->_albums = albums;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

Album* Band::GetAlbums()
{
	return this->_albums;
}

Song* Band::FindSong(std::string songTitle)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongsCount(); j++)
		{
			if (songTitle == this->_albums[i].GetSongs()[j].GetSongName())
			{
				return &this->_albums[i].GetSongs()[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongsCount(); j++)
		{
			if (song == &this->_albums[i].GetSongs()[j])
			{
				return &this->_albums[i];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	int index = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		allSongsCount += this->_albums[i].GetSongsCount();
	}

	Song* allSongs = new Song[allSongsCount];
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongsCount(); j++)
		{
			allSongs[index++] = this->_albums[i].GetSongs()[j];
		}
	}
	return allSongs;
}

Song* Band::GetAllGenreSongs(int& allSongsCount, Genre genre)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongsCount(); j++)
		{
			if (this->_albums[i].GetSongs()[j].GetGenre() == genre)
			{
				++allSongsCount;
			}
		}
	}
	if (allSongsCount == 0)
	{
		return nullptr;
	}

	int index = 0;
	Song* allSongs = new Song[allSongsCount];
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongsCount(); j++)
		{
			if (this->_albums[i].GetSongs()[j].GetGenre() == genre)
			{
				allSongs[index++] = this->_albums[i].GetSongs()[j];
			}
		}
	}
	return allSongs;
}
