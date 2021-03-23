#include "Aggregation.h"

Flight* MakeFlight()
{
	Flight* flight = new Flight;
	SetName(*flight);
	SetStartPoint(*flight);
	SetEndPoint(*flight);
	SetDepartureTime(*flight);
	SetArrivalTime(*flight);

	return flight;
}

void DemoFlightTime()
{
	Flight flights[5];
	flights[0].Name = "TU25";
	flights[0].StartPoint = "Tomsk";
	flights[0].EndPoint = "Moscow";
	flights[0].DepartureTime.Month = 4;
	flights[0].DepartureTime.Day = 15;
	flights[0].DepartureTime.Hour = 19;
	flights[0].DepartureTime.Minutes = 30;
	flights[0].ArrivalTime.Month = 4;
	flights[0].ArrivalTime.Day = 16;
	flights[0].ArrivalTime.Hour = 1;
	flights[0].ArrivalTime.Minutes = 14;
	
	flights[1].Name = "TR04";
	flights[1].StartPoint = "Tomsk";
	flights[1].EndPoint = "Novosibirsk";
	flights[1].DepartureTime.Month = 9;
	flights[1].DepartureTime.Day = 15;
	flights[1].DepartureTime.Hour = 13;
	flights[1].DepartureTime.Minutes = 30;
	flights[1].ArrivalTime.Month = 9;
	flights[1].ArrivalTime.Day = 15;
	flights[1].ArrivalTime.Hour = 14;
	flights[1].ArrivalTime.Minutes = 10;

	flights[2].Name = "TAA04";
	flights[2].StartPoint = "Kazan";
	flights[2].EndPoint = "Novosibirsk";
	flights[2].DepartureTime.Month = 11;
	flights[2].DepartureTime.Day = 20;
	flights[2].DepartureTime.Hour = 17;
	flights[2].DepartureTime.Minutes = 30;
	flights[2].ArrivalTime.Month = 11;
	flights[2].ArrivalTime.Day = 20;
	flights[2].ArrivalTime.Hour = 20;
	flights[2].ArrivalTime.Minutes = 10;

	flights[3].Name = "ER04";
	flights[3].StartPoint = "Tomsk";
	flights[3].EndPoint = "Kiev";
	flights[3].DepartureTime.Month = 5;
	flights[3].DepartureTime.Day = 7;
	flights[3].DepartureTime.Hour = 5;
	flights[3].DepartureTime.Minutes = 30;
	flights[3].ArrivalTime.Month = 5;
	flights[3].ArrivalTime.Day = 7;
	flights[3].ArrivalTime.Hour = 15;
	flights[3].ArrivalTime.Minutes = 10;

	flights[4].Name = "T4";
	flights[4].StartPoint = "Barnaul";
	flights[4].EndPoint = "Moscow";
	flights[4].DepartureTime.Month = 3;
	flights[4].DepartureTime.Day = 22;
	flights[4].DepartureTime.Hour = 16;
	flights[4].DepartureTime.Minutes = 30;
	flights[4].ArrivalTime.Month = 3;
	flights[4].ArrivalTime.Day = 22;
	flights[4].ArrivalTime.Hour = 20;
	flights[4].ArrivalTime.Minutes = 40;

	for (int i = 0; i < 5; i++)
	{
		std::cout << flights[i].Name << "  "
			<< flights[i].StartPoint << "-"
			<< flights[i].EndPoint
			<< "  Departure: " << flights[i].DepartureTime.Month
			<< "." << flights[i].DepartureTime.Day << " "
			<< flights[i].DepartureTime.Hour << ":"
			<< flights[i].DepartureTime.Minutes
			<< "  Arrival: " << flights[i].ArrivalTime.Month
			<< "." << flights[i].ArrivalTime.Day << " "
			<< flights[i].ArrivalTime.Hour << ":"
			<< flights[i].ArrivalTime.Minutes;
		std::cout << std::endl;
	}

	int timeOfFlight = GetFlightTimeMinutes(flights[2]);
	
	std::cout << std::endl;
	std::cout << flights[2].Name << "  " << flights[2].StartPoint << "-"
		<< flights[2].EndPoint << " Time of flight: "
		<< timeOfFlight / 60 << "h " << timeOfFlight % 60 << "min"
		<< std::endl;
				
}

int GetFlightTimeMinutes(Flight& flight)
{
	int timeInMinutes = 0;

	const int monthsInYear = 12;
	const int daysInMonth = 30;
	const int hoursInDay = 24;
	const int minutesInHour = 60;
	
	int DepartureTimeInMinutes = (flight.DepartureTime.Year * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (flight.DepartureTime.Month * daysInMonth
			* hoursInDay * minutesInHour)
		+ (flight.DepartureTime.Day * hoursInDay * minutesInHour)
		+ (flight.DepartureTime.Hour * minutesInHour)
		+ flight.DepartureTime.Minutes;

	int ArrivalTimeInMinutes = (flight.ArrivalTime.Year * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (flight.ArrivalTime.Month * daysInMonth
			* hoursInDay * minutesInHour)
		+ (flight.ArrivalTime.Day * hoursInDay * minutesInHour)
		+ (flight.ArrivalTime.Hour * minutesInHour)
		+ flight.ArrivalTime.Minutes;
	
	timeInMinutes = ArrivalTimeInMinutes - DepartureTimeInMinutes;
	return timeInMinutes;
}

void SetName(Flight& flight)
{
	std::cout << "Enter flight's name:" << std::endl;
	std::cin >> flight.Name;
}

void SetStartPoint(Flight& flight)
{
	std::cout << "Enter flight's start point" << std::endl;
	std::cin >> flight.StartPoint;
}

void SetEndPoint(Flight& flight)
{
	std::cout << "Enter flight's end point" << std::endl;
	std::cin >> flight.EndPoint;
}

void SetDepartureTime(Flight& flight)
{
	flight.ArrivalTime = *MakeTime();
}

void SetArrivalTime(Flight& flight)
{
	flight.ArrivalTime = *MakeTime();
	while (!CorrectTimeFlightChecker(flight))
	{
		delete &flight.ArrivalTime;
		std::cout << "Error. Arrival time can't be less? than departure time"
			<< "Enter again" << std::endl;
		flight.ArrivalTime = *MakeTime();
	}
}

bool CorrectTimeFlightChecker(Flight& flight)
{
	const int monthsInYear = 12;
	const int daysInMonth = 30;
	const int hoursInDay = 24;
	const int minutesInHour = 60;
	int DepartureTimeInMinutes = (flight.DepartureTime.Year * monthsInYear
									* daysInMonth * hoursInDay * minutesInHour)
									+ (flight.DepartureTime.Month * daysInMonth
													* hoursInDay * minutesInHour)
								+ (flight.DepartureTime.Day * hoursInDay * minutesInHour)
								+ (flight.DepartureTime.Hour * minutesInHour)
									+ flight.DepartureTime.Minutes;

	int ArrivalTimeInMinutes = (flight.ArrivalTime.Year * monthsInYear
		* daysInMonth * hoursInDay * minutesInHour)
		+ (flight.ArrivalTime.Month * daysInMonth
			* hoursInDay * minutesInHour)
		+ (flight.ArrivalTime.Day * hoursInDay * minutesInHour)
		+ (flight.ArrivalTime.Hour * minutesInHour)
		+ flight.ArrivalTime.Minutes;

	if (ArrivalTimeInMinutes > DepartureTimeInMinutes)
	{
		return true;
	}
	return false;
}

void SetYear(Time& time)
{
	time.Year = GetIntValue();
	while (time.Year < 0)
	{
		std::cout << "Error. Year can't be less, than zero" << std::endl;
		time.Year = GetIntValue();
	}
}

void SetMonth(Time& time)
{
	time.Month = GetIntValue();
	while (time.Month < 0 || time.Month > 12)
	{
		std::cout << "Error. Repeat entering a month" << std::endl;
		time.Month = GetIntValue();
	}
}

void SetDay(Time& time)
{
	time.Day = GetIntValue();
	while (time.Day < 0 || time.Day > 30)
	{
		std::cout << "Error. Repeat entering a day" << std::endl;
		time.Day = GetIntValue();
	}
}

void SetHour(Time& time)
{
	time.Hour = GetIntValue();
	while (time.Hour < 0 || time.Hour > 24)
	{
		std::cout << "Error. Repeat entering an hour" << std::endl;
		time.Hour = GetIntValue();
	}
}

void SetMinutes(Time& time)
{
	time.Minutes = GetIntValue();
	while (time.Minutes < 0 || time.Minutes > 60)
	{
		std::cout << "Error. Repeat entering minutes" << std::endl;
		time.Minutes = GetIntValue();
	}
}

Time* MakeTime()
{
	Time* time = new Time;
	SetYear(*time);
	SetMonth(*time);
	SetDay(*time);
	SetHour(*time);
	SetMinutes(*time);

	return time;
}

void SetX(Point& point)
{
	point.X = GetDoubleValue();
}

void SetY(Point& point)
{
	point.Y = GetDoubleValue();
}

Point* MakePoint()
{
	Point* point = new Point;
	SetX(*point);
	SetY(*point);

	return point;
}

void SetLength(Rectangle& rectangle)
{
	rectangle.Length = GetIntValue();
	while (rectangle.Length < 0)
	{
		std::cout << "Error, length can't be less, than zero" << std::endl;
		rectangle.Length = GetIntValue();
	}
}

void SetWidth(Rectangle& rectangle)
{
	rectangle.Width = GetIntValue();
	while (rectangle.Width < 0)
	{
		std::cout << "Error, width can't be less, than zero" << std::endl;
		rectangle.Width = GetIntValue();
	}
}

void SetCentre(Rectangle& rectangle)
{
	rectangle.Centre = *MakePoint();
}

Rectangle* MakeRectangle()
{
	Rectangle* rectangle = new Rectangle;
	SetLength(*rectangle);
	SetWidth(*rectangle);
	SetCentre(*rectangle);
	return rectangle;
}

void DemoRectangleWithPoint()
{
	double middleX = 0.0;
	double middleY = 0.0;
	
	Rectangle rectangles[5];
	rectangles[0].Length = 4;
	rectangles[0].Width = 3;
	rectangles[0].Centre.X = 3.12;
	rectangles[0].Centre.Y = 0.323;

	rectangles[1].Length = 5;
	rectangles[1].Width = 4;
	rectangles[1].Centre.X = 5.12;
	rectangles[1].Centre.Y = 6.323;

	rectangles[2].Length = 7;
	rectangles[2].Width = 3;
	rectangles[2].Centre.X = 1.12;
	rectangles[2].Centre.Y = 0.123;

	rectangles[3].Length = 17;
	rectangles[3].Width = 33;
	rectangles[3].Centre.X = 41.12;
	rectangles[3].Centre.Y = 30.123;

	rectangles[4].Length = 37;
	rectangles[4].Width = 23;
	rectangles[4].Centre.X = 11.12;
	rectangles[4].Centre.Y = 60.123;

	for (int i = 0; i < 5; i++)
	{
		middleX += rectangles[i].Centre.X;
		middleY += rectangles[i].Centre.Y;
		std::cout << "X = " << rectangles[i].Centre.X << ";  "
			<< "Y = " << rectangles[i].Centre.Y << ";  "
			<< "Length = " << rectangles[i].Length << ";  "
			<< "Width = " << rectangles[i].Width << ";" << std::endl;
	}
	middleX /= 5;
	middleY /= 5;

	std::cout << std::endl;
	std::cout << "Xcenter = " << middleX << ";  "
				<< "Ycenter = " << middleY << std::endl;
}
