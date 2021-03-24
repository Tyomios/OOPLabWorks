#pragma once
#ifndef _H_AGGREGATIONOTM_ACAD149
#define _H_AGGREGATIONOTM_ACAD149
#include "Common.h"


enum Genre
{
	Rock,
	Pop,
	Rap,
	LoFi,
	Jazz
};


struct Song
{
	std::string Name;
	int CountingInSeconds;
	Genre Style;
};

void SetSongName(Song& song);

void SetCountingInSeconds(Song& song);

void SetGenre(Song& song);

Song* MakeSong();

struct Album
{
	std::string Name;
	int Year;
	int SongsCount = 40;
	Song* Songs = new Song[SongsCount];
};


void SetAlbumName(Album& album);

void SetYear(Album& album);

void SetSongsCount(Album& album);

void SetSongs(Album& album);

Album* MakeAlbum();

struct Band
{
	std::string Name;
	std::string Content;
	int AlbumsCount = 100;
	Album* Albums = new Album[AlbumsCount];
};

void SetBandName(Band& band);

void SetContent(Band& band);

void SetAlbumsCount(Band& band);

void SetAlbums(Band& band);

Band* MakeBand();

Song* FindSong(std::string songTitle, Band* band);

Album* FindAlbum(Song* song, Band* band);

Song* GetAllSongs(Band* band, int& allSongsCount);

Song* GetAllGenreSongs(Band* band, Genre findingGenre, int& allSongsCount);

void DemoBand();
#endif