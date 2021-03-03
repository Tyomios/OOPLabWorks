#include "Menu.h"


void ExceprionMenu()
{
	int userChoose;

	while (true)
	{
		std::cout	<< "1 - 1.1 (exception practice)\n"
					<< "2 - 1.2(try/catch practice)\n"
					<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
			case 1:
			{
				DemoSort();
					
				system("pause");
				break;
			}
			case 2:
			{
				DemoSort();
					
				system("pause");
				break;
			}
			case 0:
			{
				system("cls");
				return;
			}
			default:
			{
				std::cout << "Unknown command" << std::endl;
			}
		}
		system("cls");
	}
}

void CreatingStructureMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 2.1 (creating structures)\n"
			<< "2 - 2.2(creating own structures)\n"
			<< "3 - 2.3(functions with structures)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
			case 1:
			{
				Rectangle rectangle;
			Flight flight;
			Film move;
			Time time;

			std::cout << "All works good" << std::endl;
			system("pause");
			break;
			}
			case 2:
			{
			Contact phone;
			Song song;
			Subject math;
			std::cout << "All works good" << std::endl;
				
			system("pause");
			break;
			}
			case 3:
			{
				int taskChooser = 10;
				while(taskChooser != 0)
				{
					std::cout << "2.3.1 (simple functions)\n"
						<< "2.3.2 (user input functions)\n"
						<< "2.3.3 (array data)\n"
						<< "0 - close" << std::endl;

					taskChooser = GetIntValue();

					switch (taskChooser)
					{
					case 1:
						{
							Rectangle* rectangle = DemoRectangle(1);
							std::cout << "Color: " << rectangle->Color
							<< " parameters: " << rectangle->Length << "x" << rectangle->Width
							<< std::endl;
							
							Film* film = DemoFilm(1);
							std::cout << "Name: " << film->Name << " - "
								<< "Style: " << film->Style << " - "
								<< "Rating: " << film->Rating << " - "
								<< "Year: " << film->Year << std::endl;
							
							Flight* flight = DemoFlight(1);
							std::cout << "Start point: " << flight->StartPoint << " - "
								<< "End point: " << flight->EndPoint << " - "
								<< "Time of flight: " << flight->TimeOfFlightMinutes
								<< std::endl;
							
							Contact* contact = DemoContact(1);
							std::cout << "Name: " << contact->Name << " - " << contact->Number << std::endl;
							
							Song* song = DemoSong(1);
							std::cout << "Name: " << song->Name << " - "
								<< "Favorite: " << song->IsFavorite << " - "
								<< "Continuing: " << song->CountingInSeconds
								<< std::endl;
							
							Subject* subject = DemoSubject(1);
							std::cout << "Name: " << subject->Name << " - "
								<< "Certified: " << subject->IsCertified << " - "
								<< "Mark: " << subject->Mark
								<< std::endl;
							
							Time* time = DemoTime(1);
							std::cout << time->Hours << ":"
								<< time->Minutes << ":"
								<< time->Seconds
								<< std::endl;
							
							system("pause");
							break;
						}
					case 2:
						{
							DemoContactInput();
							DemoFilmInput();
							DemoFlightInput();
							DemoRectangleInput();
							DemoSongInput();
							DemoSubjectInput();
							DemoTimeInput();

							system("pause");
							break;
						}
					case 3:
						{
						Contact* contact = DemoContact(3);
						for (int i = 0; i < 3;i++)
						{
							std::cout << "Name: "<< contact[i].Name <<" - " << contact[i].Number << std::endl;
						}
						std::cout << std::endl;
							
						Film* film = DemoFilm(3);
						for (int i = 0; i < 3; i++)
						{
							std::cout	<< "Name: " << film[i].Name << " - "
										<< "Style: "<<film[i].Style << " - "
										<< "Rating: " << film[i].Rating << " - "
										<< "Year: "<< film[i].Year	<< std::endl;
						}
						std::cout << std::endl;
							
						Flight* flight = DemoFlight(3);
						for (int i = 0; i < 3; i++)
						{
							std::cout << "Start point: " << flight[i].StartPoint << " - "
								<< "End point: " << flight[i].EndPoint<< " - "
								<< "Time of flight: " << flight[i].TimeOfFlightMinutes
								<< std::endl;
						}
						std::cout << std::endl;
							
						Rectangle* rectangle = DemoRectangle(3);
						for (int i = 0; i < 3; i++)
						{
							std::cout << "Parameters: " << rectangle[i].Length << "x"
								<< rectangle[i].Width << " , "
								<< "Color: " << rectangle[i].Color
								<< std::endl;
						}
						std::cout << std::endl;
							
						Song* song = DemoSong(3);
						for (int i = 0; i < 3; i++)
						{
							std::cout << "Name: " << song[i].Name << " - "
								<< "Favorite: " << song[i].IsFavorite << " - "
								<< "Continuing: " << song[i].CountingInSeconds
								<< std::endl;
						}
						std::cout << std::endl;
							
						Subject* subject = DemoSubject(3);
						for (int i = 0; i < 3; i++)
						{
							std::cout << "Name: " << subject[i].Name << " - "
								<< "Certified: " << subject[i].IsCertified<< " - "
								<< "Mark: " << subject[i].Mark
								<< std::endl;
						}
						std::cout << std::endl;
							
						Time* time = DemoTime(3);
						for (int i = 0; i < 3; i++)
						{
							std::cout << time[i].Hours << ":"
								<< time[i].Minutes << ":"
								<< time[i].Seconds
								<< std::endl;
						}
						std::cout << std::endl;

						std::cout << "All works great" << std::endl;
						system("pause");
						break;
						}
					case 0:
						{
							system("cls");
							break;
						}
					}
					system("cls");
				}
			}
		case 0:
		{
			system("cls");
			return;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
		}
		}
		system("cls");
	}
}

void StructsAndPointersMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 4.1 (use pointer with structure)\n"
			<< "2 - 4.2(two equal pointers for rectangle)\n"
			<< "3 - 4.3(two equal pointers for other structures)\n"
			<< "4 - 4.4(wrong pointers see comments in code)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			Rectangle* rectangle = DemoRectangle(1);
			std::cout << "Color: " << rectangle->Color
				<< " parameters: " << rectangle->Length << "x" << rectangle->Width
				<< std::endl;

			rectangle->Color = "Gray";
			rectangle->Length = 12.1;
			rectangle->Width = 77.6;
			std::cout << "New parameters:" << "Color: " << rectangle->Color
				<< " parameters: " << rectangle->Length << "x" << rectangle->Width
				<< std::endl;

			system("pause");
			break;
		}
		case 2:
		{
			Rectangle rectangle;
			Rectangle* rectanglePointer = &rectangle;
			Rectangle* rectangleNextPointer = &rectangle;

			std::cout << " 1) " << rectanglePointer
				<< "\n 2) " << rectangleNextPointer << std::endl;
				
			system("pause");
			break;
		}
		case 3:
			{
				
			}
		case 4:
			{
				WrongPointers();
				std::cout << "All works good" << std::endl;

				system("pause");
				break;
			}
		case 0:
		{
			system("cls");
			return;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
		}
		}
		system("cls");
	}
}

void StructsAndFunctionsMenu()
{
	int userChoose;

	while (true)
	{
		std::cout << "1 - 5.1 (read and write structure using link)\n"
			<< "2 - 5.2(read and write array)\n"
			<< "3 - 5.3(swap values in a pair of structures)\n"
			<< "4 - 5.4(find the biggest length object)\n"
			<< "5 - 5.5(find the biggest square object)\n"
			<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			Rectangle rectangle;
			ReadRectangle(rectangle);
			WriteRectangle(rectangle);
			system("pause");
			break;
		}
		case 2:
		{
			DemoReadAndWriteRectangles();
			system("pause");
			break;
		}
		case 3:
		{
			Rectangle rectangleOne;
			Rectangle rectangleTwo;
			ReadRectangle(rectangleOne);
			ReadRectangle(rectangleTwo);
			WriteRectangle(rectangleOne);
			WriteRectangle(rectangleTwo);
				
			Exchange(rectangleOne, rectangleTwo);
			WriteRectangle(rectangleOne);
			WriteRectangle(rectangleTwo);
			system("pause");
			break;
		}
		case 4:
		{
			Rectangle* rectangles = new Rectangle[5];
			for (int i = 0; i < 5; i++)
			{
				ReadRectangle(rectangles[i]);
			}
				
			FindRectangle(rectangles, 5);
			delete[] rectangles;
			system("pause");
			break;
		}
		case 5:
		{
			Rectangle* rectangles = new Rectangle[5];
			for (int i = 0; i < 5; i++)
			{
				ReadRectangle(rectangles[i]);
			}
				
			FindMaxRectangle(rectangles, 5);
			delete[] rectangles;
			system("pause");
			break;
		}
		case 0:
		{
			system("cls");
			return;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
		}
		}
		system("cls");
	}
}
