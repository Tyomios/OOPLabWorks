#include "Header files\AggregationOneToMany.h"

void DemoBand()
{
	Song songsFirstAlbum[4];
	songsFirstAlbum[0] = Song("La-La-La", 102, Rock);
	songsFirstAlbum[1] = Song("Aqua", 102, Pop);
	songsFirstAlbum[2] = Song("1003", 102, Jazz);
	songsFirstAlbum[3] = Song("BDC", 102, Rap);

	Song songsSecondAlbum[4];
	songsSecondAlbum[0] = Song("Woodda", 22, Rock);
	songsSecondAlbum[1] = Song("Bekka", 22, Pop);
	songsSecondAlbum[2] = Song("Zajgi", 22, Jazz);
	songsSecondAlbum[3] = Song("BDC (Piano version)", 22, Rap);

	Song songsThirdAlbum[4];
	songsThirdAlbum[0] = Song("White leaf", 10, Rock);
	songsThirdAlbum[1] = Song("Pandora box", 10, Pop);
	songsThirdAlbum[2] = Song("Fly to", 10, Jazz);
	songsThirdAlbum[3] = Song("BDC (feat. Someone)", 10, Rap);
	
	Album albums[3];
	albums[0] = Album("First album", 2004, 4, songsFirstAlbum);
	albums[1] = Album("Second album", 2004, 4, songsSecondAlbum);
	albums[2] = Album("Third album", 2009, 4, songsThirdAlbum);
	Band band = Band("Mband", "-", 3, albums );
	

	std::cout << "Result of FindSong('Woodda'): "
				<< band.FindSong("Woodda")->GetSongName() << std::endl;
	
	std::cout << "Result of FindAlbum (song 2 from 2nd album): "
			<< band.FindAlbum(&band.GetAlbums()[2].GetSongs()[2])->GetName() << std::endl;
	
	int getAllSongs = 0;
	Song* allSongs = band.GetAllSongs(getAllSongs);

	std::cout << "All songs: ";
	for (int i = 0; i < getAllSongs; i++)
	{
		std::cout << allSongs[i].GetSongName();
		if (i != (getAllSongs - 1))
		{
			std::cout << ",  ";
		}
	}
	std::cout << std::endl;

	
	int popSongsCount = 0;
	Song* allPopSongs = band.GetAllGenreSongs(popSongsCount, Pop );

	std::cout << "Pop songs: ";
	for (int i = 0; i < popSongsCount; i++)
	{
		std::cout << allPopSongs[i].GetSongName();
		if (i != (popSongsCount - 1))
		{
			std::cout << ",  ";
		}
	}
	std::cout << std::endl;
	
	delete[] allSongs;
	delete[] allPopSongs;
}