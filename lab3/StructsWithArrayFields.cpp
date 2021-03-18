#include "StructsWithArrayFields.h"


void DemoBook()
{
	Book book;
	book.Name = "Kafka on the beach";
	book.Year = 2002;
	book.PagesCount = 719;
	book.AuthorsCount = 2;
	book.Authors[0] = "Haruki Murakami";
	book.Authors[1] = "Another author";
}


void ReadBookFromConsole(Book& book)
{
	std::cout << "Enter book's name:" << std::endl;
	std::cin >> book.Name;

	const int secondsInYears = 31536000;
	const int startYear = 1970;
	time_t currentYear = (time(NULL) / secondsInYears) + startYear;

	std::cout << "Enter book's year:" << std::endl;
	book.Year = GetIntValue();
	while (book.Year > currentYear || book.Year < 0)
	{
		std::cout << "Error. Enter correct year ";
		book.Year = GetIntValue();
	}
	
	std::cout << "Enter count of pages:";
	book.PagesCount = GetIntValue();
	while (book.PagesCount < 0)
	{
		std::cout	<< "Error. Number oà pages can't be less, than zero.\n"
					<< "Enter correct number:" << std::endl;
		book.PagesCount = GetIntValue();
	}

	std::cout << "Enter number of authors (1-10):" << std::endl;
	book.AuthorsCount = GetIntValue();
	while (book.AuthorsCount < 0 || book.AuthorsCount > 10)
	{
		std::cout << "Error. Enter again" << std::endl;
		book.AuthorsCount = GetIntValue();
	}
	for (int i = 0; i < book.AuthorsCount; i++)
	{
		std::cout << "Enter " << i + 1 << " author's name:" << std::endl;
		std::cin >> book.Authors[i];
	}
}


void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorsCount; i++)
	{
		std::cout << book.Authors[i] << ", ";
	}
	std::cout	<< book.Name << ".  "
				<< book.Year << ". - "
				<< book.PagesCount << " pages"
				<< std::endl;
}
