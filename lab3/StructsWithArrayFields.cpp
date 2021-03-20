#include "StructsWithArrayFields.h"


void DemoBook()
{
	Book books[3];
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << " book:" << std::endl;
		ReadBookFromConsole(books[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		WriteBookToConsole(books[i]);
	}
	std::cout << "Enter author's name for search:" << std::endl;
	std::string searchAuthor;
	std::cin >> searchAuthor;
	int foundBook = FindBookByAuthor(books, 3, searchAuthor);
	if (foundBook == -1 )
	{
		std::cout << "Book with author "
			<< "'" << searchAuthor << "'" << "not found"
			<< std::endl;
		return;
	}
	WriteBookToConsole(books[foundBook]);
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


int FindBookByAuthor(Book* books, int booksCount, std::string author)
{
	int bookIndex = -1;
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorsCount; j++)
		{
			if (books[i].Authors[j] == author)
			{
				bookIndex = i;
			}
		}
	}
	return bookIndex;
}
