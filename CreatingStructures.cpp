#include "CreatingStructures.h"

#include <iostream>


Contact* DemoContact(int size)
{
	switch (size)
	{
		case 1:
		{
			Contact* phone = new Contact;
			phone->IsFavorite = true;
			phone->Name = "Honne";
			phone->Number = 07321;
			return phone;
		}
		case 3:
		{
			Contact* phone = new Contact[3];
			phone[0].IsFavorite = true;
			phone[0].Name = "Bobby";
			phone[0].Number = 833659;

			phone[1].IsFavorite = true;
			phone[1].Name = "Lobby Manager";
			phone[1].Number = 34493;

			phone[2].IsFavorite = false;
			phone[2].Name = "Worst worker";
			phone[2].Number = 4556;
			return phone;
		}
	}
}


Film* DemoFilm(int size)
{
	switch (size)
	{
		case 1:
		{
			//Если переменная обозначает фильм, то на английском это слово пишется иначе
			Film* move = new Film;
			move->Name = "Cool Move";
			move->Rating = 9.0;
			move->Style = Action;
			move->TimeInMinutes = 190;
			move->Year = 2007;
				
			return move;
		}
		case 3:
		{
			Film* move = new Film[3];
			//TODO: Расстояние между частями кода внутри метода - не более одной строки

			move[0].Name = "Wave";
			move[1].Name = "Fastest horse";
			move[2].Name = "City live";

			move[0].Rating = 4.3;
			move[1].Rating = 5.7;
			move[2].Rating = 1.3;


			move[0].Style = Action;
			move[1].Style = Comedy;
			move[2].Style = Trailer;

			move[0].TimeInMinutes = 134;
			move[1].TimeInMinutes = 45;
			move[2].TimeInMinutes = 25;

			move[0].Year = 2012;
			move[1].Year = 2015;
			move[2].Year = 2020;
				
			return move;
		}
	}
}


Flight* DemoFlight(int size)
{
	switch (size)
	{
		case 1:
		{
			Flight* flight = new Flight;
			flight->EndPoint = "Moscow";
			flight->StartPoint = "Tomsk";
			flight->TimeOfFlightMinutes = 300;

			return flight;
		}
		case 3:
		{
			Flight* flight = new Flight[3];

			flight[0].EndPoint = "New York";
			flight[1].EndPoint = "Novosibirsk";
			flight[2].EndPoint = "Kazan";

			flight[0].StartPoint = "Boston";
			flight[1].StartPoint = "Moscow";
			flight[2].StartPoint = "Novosibirsk";

			flight[0].TimeOfFlightMinutes = 180;
			flight[1].TimeOfFlightMinutes = 244;
			flight[2].TimeOfFlightMinutes = 160;

			return flight;
		}
	}
}


Rectangle* DemoRectangle(int size)
{
	switch (size)
	{
		case 1:
		{
			Rectangle* rectangle = new Rectangle;
			rectangle->Color = "Blue";
			rectangle->Length = 4.5;
			rectangle->Width = 20.3;
			return rectangle;
		}
		case 3:
		{
			Rectangle* rectangle = new Rectangle[3];

			rectangle[0].Color = "Black";
			rectangle[1].Color = "Red";
			rectangle[2].Color = "White";

			rectangle[0].Length = 0.3;
			rectangle[1].Length = 5.0;
			rectangle[2].Length = 1.6;

			rectangle[0].Width = 10.3;
			rectangle[1].Width = 12.7;
			rectangle[2].Width = 18.1;

			return rectangle;
		}
	}
}


Song* DemoSong(int size)
{
	switch (size)
	{
		case 1:
			{
			Song* song = new Song;
			song->CountingInSeconds = 216;
			song->IsFavorite = false;
			song->Name = "IDK";

			return song;
			}
		case 3:
		{
			Song* song = new Song[3];

			song[0].CountingInSeconds = 127;
			song[1].CountingInSeconds = 83;	
			song[2].CountingInSeconds = 77;

			song[0].IsFavorite = true;
			song[1].IsFavorite = false;
			song[2].IsFavorite = false;	

			song[0].Name = "Beep";
			song[1].Name = "Rock wave";
			song[2].Name = "Jazz 3D";

			return song;
		}
	}	
}


Subject* DemoSubject(int size)
{
	switch (size)
	{
		case 1:
			{
			Subject* subject = new Subject;
			subject->Name = "Math";
			subject->IsCertified = true;
			subject->Mark = 5;

			return subject;
			}
		case 3:
			{
			Subject* subject = new Subject[3];

			subject[0].Name = "English";
			subject[1].Name = "Music";
			subject[2].Name = "PE";

			subject[0].IsCertified = true;
			subject[1].IsCertified = true;
			subject[2].IsCertified = true;

			subject[0].Mark = 5;
			subject[1].Mark = 5;
			subject[2].Mark = 5;
			return subject;
			}
	}
	
}


void DemoRectangleInput()
{
	Rectangle rectangle;

	std::cout << "Enter rectangle's length:" << std::endl;
	std::cin >> rectangle.Length;

	std::cout << "Enter rectangle's weight:" << std::endl;
	std::cin >> rectangle.Width;

	std::cout	<< "Rectangle's parameters:" << rectangle.Length << "x" << rectangle.Width
				<< std::endl;
}


void DemoFlightInput()
{
	Flight flight;

	std::cout << "Enter start point of flight:" << std::endl;
	std::cin >> flight.StartPoint;

	std::cout << "Enter end point of flight:" << std::endl;
	std::cin >> flight.EndPoint;

	std::cout	<< "Flight from " << flight.StartPoint << " to " << flight.EndPoint
				<< " today." << std::endl;
}


void DemoFilmInput()
{
	Film film;

	std::cout << "Enter move's name:" << std::endl;
	std::cin >> film.Name;

	std::cout << "Enter move's year:" << std::endl;
	std::cin >> film.Year;

	std::cout << "Film " << film.Name << " was ready in " << film.Year << std::endl;
}


void DemoTimeInput()
{
	Time time;

	std::cout << "Enter time hours:" << std::endl;
	std::cin >> time.Hours;

	std::cout << "Enter time minutes:" << std::endl;
	std::cin >> time.Minutes;

	std::cout << "Enter time seconds:" << std::endl;
	std::cin >> time.Seconds;

	std::cout << "Time: " << time.Hours << ":"
			<< time.Minutes << ":" << time.Seconds << std::endl;
}

void DemoContactInput()
{
	Contact contact;

	std::cout << "Enter contact's name: " << std::endl;
	std::cin >> contact.Name;

	std::cout << "Enter contact's number: " << std::endl;
	std::cin >> contact.Number;

	std::cout << "Contact: " << contact.Name << "("
				<< contact.Number << ")" << std::endl;
}

void DemoSongInput()
{
	Song song;

	std::cout << "Enter song's name:" << std::endl;
	std::cin >> song.Name;

	std::cout << "Enter song's counting in seconds: " << std::endl;
	std::cin >> song.CountingInSeconds;

	std::cout	<< "Song - " << song.Name
				<< "\ncontinuing: " << (song.CountingInSeconds / 60)
				<< ":" << (song.CountingInSeconds % 60)
				<< std::endl;	
}

void DemoSubjectInput()
{
	Subject subject;

	std::cout << "Enter subject's name: " << std::endl;
	std::cin >> subject.Name;

	std::cout << "Enter subject's mark: " << std::endl;
	std::cin >> subject.Mark;
	
	std::cout << "Subject: " << subject.Name
			<< "\nMark: " << subject.Mark << std::endl;
}


Time* DemoTime(int size)
{
	switch (size)
	{
		case 1:
		{
			Time* clock = new Time;

			clock->Hours = 13;
			clock->Minutes = 27;
			clock->Seconds = 54;

			return clock;
		}
		case 3:
		{
			Time* time = new Time[3];

			time[0].Hours = 3;
			time[1].Hours = 7;
			time[2].Hours = 20;

			time[0].Minutes = 59;
			time[1].Minutes = 30;
			time[2].Minutes = 22;

			time[0].Seconds = 59;
			time[1].Seconds = 00;
			time[2].Seconds = 24;
			return time;
		}
	}
}