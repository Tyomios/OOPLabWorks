#include "Header files\AggregationOtM.h"


void SetSongName(Song& song)
{
	std::cout << "Enter song's name:" << std::endl;
	std::cin >> song.Name;
}


void SetCountingInSeconds(Song& song)
{
	std::cout << "Enter song's counting in seconds:" << std::endl;
	song.CountingInSeconds = GetIntValue();
	while(song.CountingInSeconds <= 0)
	{
		std::cout << "Error. Song's counting in seconds"
					<<" can't be less or equal zero"
					<<"Enter again "<< std::endl;
		song.CountingInSeconds = GetIntValue();
	}
}


void SetGenre(Song& song)
{
	int userChoose;
	while (true)
	{
		std::cout << "Choose genre from the list:\n"
			<< "1 - Rock\n"
			<< "2 - Pop\n"
			<< "3 - Rap\n"
			<< "4 - LoFi\n"
			<< "5 - Jazz" << std::endl;
		userChoose = GetIntValue();

		switch (userChoose)
		{
			case 1:
			{
				song.Style = Rock;
				return;
			}
			case 2:
			{
				song.Style = Pop;
				return;
			}
			case 3:
			{
				song.Style = Rap;
				return;
			}
			case 4:
			{
				song.Style = LoFi;
				return;
			}
			case 5:
			{
				song.Style = Jazz;
				return;
			}
			default:
			{
				std::cout << "Unknown command. Try again" << std::endl;
				break;
			}
		}
		system("cls");
	}
}


Song* MakeSong()
{
	Song* song = new Song;
	SetSongName(*song);
	SetCountingInSeconds(*song);
	SetGenre(*song);

	return song;
}


void SetAlbumName(Album& album)
{
	std::cout << "Enter album's name:" << std::endl;
	std::cin >> album.Name;
}


void SetYear(Album& album)
{
	const int secondsInYears = 31536000;
	const int startYear = 1970;
	time_t currentYear = (time(NULL) / secondsInYears) + startYear;

	std::cout << "Enter album's year:" << std::endl;
	album.Year = GetIntValue();
	while (album.Year > currentYear || album.Year <= 0)
	{
		std::cout << "Error. Enter correct year ";
		album.Year = GetIntValue();
	}
}


void SetSongsCount(Album& album)
{
	std::cout << "Enter number of songs in album:" << std::endl;
	album.SongsCount = GetIntValue();
	while (album.SongsCount <= 0)
	{
		std::cout	<< "Error. Number of songs can't be less or equal zero\n"
					<< "Enter again" << std::endl;
		album.SongsCount = GetIntValue();
	}
}


void SetSongs(Album& album)
{
	for (int i = 0; i < album.SongsCount; i++)
	{
		album.Songs[i] = *MakeSong();
	}
}


Album* MakeAlbum()
{
	Album* album = new Album;
	SetAlbumName(*album);
	SetYear(*album);
	SetSongsCount(*album);
	SetSongs(*album);

	return album;
}


void SetBandName(Band& band)
{
	std::cout << "Enter band's name:" << std::endl;
	std::cin >> band.Name;
}


void SetContent(Band& band)
{
	std::cout << "Write some info about band" << std::endl;
	std::cin >> band.Content;
}


void SetAlbumsCount(Band& band)
{
	std::cout << "Enter number of albums:" << std::endl;
	band.AlbumsCount = GetIntValue();
	while (band.AlbumsCount < 0)
	{
		std::cout << "Error. Number of albums can't be less, than zero " << std::endl;
		band.AlbumsCount = GetIntValue();
	}
}


void SetAlbums(Band& band)
{
	for (int i = 0; i < band.AlbumsCount; i++)
	{
		std::cout << i + 1 << " album:" << std::endl;
		band.Albums[i] = *MakeAlbum();
		std::cout << std::endl;
	}
}


Band* MakeBand()
{
	Band* band = new Band;
	SetBandName(*band);
	SetContent(*band);
	SetAlbumsCount(*band);
	SetAlbums(*band);

	return band;
}


Song* FindSong(std::string songTitle, Band* band)
{
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			if (songTitle == band->Albums[i].Songs[j].Name)
			{
				return &band->Albums[i].Songs[j];
			}
		}
	}
	return nullptr;
}


Album* FindAlbum(Song* song, Band* band)
{
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			if (song == &band->Albums[i].Songs[j])
			{
				return &band->Albums[i];
			}
		}
	}
	return nullptr;
}


Song* GetAllSongs(Band* band, int& allSongsCount)
{
	int index = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		allSongsCount += band->Albums[i].SongsCount;
	}

	Song* allSongs = new Song[allSongsCount];
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			allSongs[index++] = band->Albums[i].Songs[j];
		}
	}
	return allSongs;
}


Song* GetAllGenreSongs(Band* band, Genre findingGenre, int& allSongsCount)
{
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			if (band->Albums[i].Songs[j].Style == findingGenre)
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
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i].SongsCount; j++)
		{
			if(band->Albums[i].Songs[j].Style == findingGenre)
			{

				allSongs[index++] = band->Albums[i].Songs[j];
				
			}
		}
	}
	return allSongs;
}


void DemoBand()
{
	Band* band = new Band;
	band->AlbumsCount = 3;
	band->Name = "Mband";
	band->Content = "-";
	
	band->Albums[0].Name = "First album";
	band->Albums[0].SongsCount = 4;
	band->Albums[0].Year = 2004;
	band->Albums[0].Songs[0].Name = "La-La-La";
	band->Albums[0].Songs[0].Style = Rock;
	band->Albums[0].Songs[1].Name = "Aqua";
	band->Albums[0].Songs[1].Style = Pop;
	band->Albums[0].Songs[2].Name = "1003";
	band->Albums[0].Songs[2].Style = Jazz;
	band->Albums[0].Songs[3].Name = "BDC";
	band->Albums[0].Songs[3].Style = Rap;

	band->Albums[1].Name = "Second album";
	band->Albums[1].SongsCount = 4;
	band->Albums[1].Year = 2004;
	band->Albums[1].Songs[0].Name = "Woodda";
	band->Albums[1].Songs[0].Style = Rock;
	band->Albums[1].Songs[1].Name = "Bekka";
	band->Albums[1].Songs[1].Style = Pop;
	band->Albums[1].Songs[2].Name = "Zajgi";
	band->Albums[1].Songs[2].Style = Jazz;
	band->Albums[1].Songs[3].Name = "BDC (Piano version)";
	band->Albums[1].Songs[3].Style = Rap;

	band->Albums[2].Name = "Third album";
	band->Albums[2].SongsCount = 4;
	band->Albums[2].Year = 2009;
	band->Albums[2].Songs[0].Name = "White leaf";
	band->Albums[2].Songs[0].Style = Rock;
	band->Albums[2].Songs[1].Name = "Pandora box";
	band->Albums[2].Songs[1].Style = Pop;
	band->Albums[2].Songs[2].Name = "Fly to";
	band->Albums[2].Songs[2].Style = Jazz;
	band->Albums[2].Songs[3].Name = "BDC (feat. Someone)";
	band->Albums[2].Songs[3].Style = Rap;

	std::cout << "Result of FindSong('Woodda'): "
				<< FindSong("Woodda", band) << std::endl;
	std::cout << "Result of FindAlbum (song 2 from 2nd album): "
			<< FindAlbum(&band->Albums[2].Songs[2], band) << std::endl;
	
	int getAllSongs = 0;
	Song* allSongs = GetAllSongs(band, getAllSongs);

	std::cout << "All songs: ";
	for (int i = 0; i < getAllSongs; i++)
	{
		std::cout << allSongs[i].Name;
		if (i != (getAllSongs - 1))
		{
			std::cout << ",  ";
		}
	}
	std::cout << std::endl;

	
	int popSongsCount = 0;
	Song* allPopSongs = GetAllGenreSongs(band, Pop, popSongsCount);

	std::cout << "Pop songs: ";
	for (int i = 0; i < popSongsCount; i++)
	{
		std::cout << allPopSongs[i].Name;
		if (i != (popSongsCount - 1))
		{
			std::cout << ",  ";
		}
	}
	std::cout << std::endl;
	
	delete band;
	delete[] allSongs;
	delete[] allPopSongs;
}
