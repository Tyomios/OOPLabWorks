#include "StructsWithArrayFields.h"


void DemoBook()
{
	Book* books = new Book[3];
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
	delete[] books;
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
	int bookNotFound = -1;
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorsCount; j++)
		{
			if (books[i].Authors[j] == author)
			{
				 return i;
			}
		}
	}
	return bookNotFound;
}


void ReadRouteFromConsole(Route& route)
{
	std::cout << "Enter route's number: " << std::endl;
	route.Number = GetIntValue();

	std::cout << "Enter route's continuing in minutes: " << std::endl;
	route.ContinuingInMinutes = GetIntValue();
	
	std::cout << "Enter route's interval: " << std::endl;
	route.Interval = GetIntValue();

	std::cout << "Enter number of halts: " << std::endl;
	route.HaltCount = GetIntValue();

	for (int i = 0; i < route.HaltCount; i++)
	{
		std::cout << "Enter halt " << i + 1 << ": " << std::endl;
		std::cin >> route.Halts[i];
	}
}


void WriteRouteToConsole(Route& route)
{
	std::cout << "Route's number - "<< route.Number << "\n"
	<< "Interval: " << route.Interval << "\n"
	<< "Continuing: " << route.ContinuingInMinutes << "\n"
	"Halts: ";
	for (int i = 0; i < route.HaltCount; i++)
	{
		std::cout << route.Halts[i] << " - ";
	}
	std::cout << std::endl;
}


int FindRouteTo(Route* routes, int routesCount, std::string halt)
{
	int indexNotFound = -1;
	for (int i = 0; i < routesCount; i++)
	{
		for (int j = 0; j < routes[i].HaltCount; j++)
		{
			if (routes[i].Halts[j] == halt)
			{
				return i;
			}
		}
	}
	return indexNotFound;
}


void DemoRoute()
{
	Route* routes = new Route[3];
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << " route:" << std::endl;
		ReadRouteFromConsole(routes[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		WriteRouteToConsole(routes[i]);
	}
	std::cout << "Enter halt for search:" << std::endl;
	std::string searchHalt;
	std::cin >> searchHalt;
	int foundRoute = FindRouteTo(routes, 3, searchHalt);
	if (foundRoute == -1)
	{
		std::cout << "Route to "
			<< "'" << searchHalt << "'" << "not found"
			<< std::endl;
		return;
	}
	WriteRouteToConsole(routes[foundRoute]);
	delete[] routes;
}
