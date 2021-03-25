#include "Header files\Aggregation.h"

void DemoFlightWithTime()
{
	Time departureTimes[5];
	departureTimes[0] = Time(2020, 4, 15, 19, 30);
	departureTimes[1] = Time(2020, 9, 15, 13, 30);
	departureTimes[2] = Time(2020, 11, 20, 17, 30);
	departureTimes[3] = Time(2020, 5, 7, 5, 30);
	departureTimes[4] = Time(2020, 3, 22, 16, 30);
	
	Time arrivalTimes[5];
	arrivalTimes[0] = Time(2020, 4, 16, 1, 14);
	arrivalTimes[1] = Time(2020, 9, 15, 14, 10);
	arrivalTimes[2] = Time(2020, 11, 20, 20, 10);
	arrivalTimes[3] = Time(2020, 5, 7, 15, 10);
	arrivalTimes[4] = Time(2020, 3, 22, 20, 40);
	
	Flight flights[5];
	flights[0] = Flight("TU25", "Tomsk", "Moscow", &departureTimes[0], &arrivalTimes[0]);
	flights[1] = Flight("TR04", "Tomsk", "Novosibirsk", &departureTimes[1], &arrivalTimes[1]);
	flights[2] = Flight("TAA04", "Kazan", "Novosibirsk", &departureTimes[2], &arrivalTimes[2]);
	flights[3] = Flight("ER04", "Tomsk", "Kiev", &departureTimes[3], &arrivalTimes[3]);
	flights[4] = Flight("T4", "Barnaul", "Moscow", &departureTimes[4], &arrivalTimes[4]);

	for (int i = 0; i < 5; i++)
	{
		std::cout << flights[i].GetName() << "  "
			<< flights[i].GetStartPoint() << "-"
			<< flights[i].GetEndPoint()
			<< "  Departure: " << flights[i].GetDepartureTime()->GetMonth()
			<< "." << flights[i].GetDepartureTime()->GetDay() << " "
			<< flights[i].GetDepartureTime()->GetHour() << ":"
			<< flights[i].GetDepartureTime()->GetMinutes()
			<< "  Arrival: " << flights[i].GetArrivalTime()->GetMonth()
			<< "." << flights[i].GetArrivalTime()->GetDay() << " "
			<< flights[i].GetArrivalTime()->GetHour() << ":"
			<< flights[i].GetArrivalTime()->GetMinutes();
		std::cout << std::endl;
	}

	int timeOfFlight = flights[2].GetFlightTimeMinutes();
	
	std::cout << std::endl;
	std::cout << flights[2].GetName() << "  " << flights[2].GetStartPoint() << "-"
		<< flights[2].GetEndPoint() << " Time of flight: "
		<< timeOfFlight / 60 << "h " << timeOfFlight % 60 << "min"
		<< std::endl;
				
}

void DemoRectangleWithPoint()
{
	double middleX = 0.0;
	double middleY = 0.0;

	Point centres[5];
	centres[0] = Point(3.12, 0.323);
	centres[1] = Point(5.12, 6.323);
	centres[2] = Point(1.12, 0.123);
	centres[3] = Point(41.12, 30.323);
	centres[4] = Point(11.12, 60.323);
	
	Rectangle rectangles[5];
	rectangles[0] = Rectangle(4, 3, &centres[0]);
	rectangles[1] = Rectangle(5, 4, &centres[1]);
	rectangles[2] = Rectangle(7, 3, &centres[2]);
	rectangles[3] = Rectangle(17, 33, &centres[3]);
	rectangles[4] = Rectangle(37, 23, &centres[4]);

	for (int i = 0; i < 5; i++)
	{
		middleX += rectangles[i].GetCentre()->GetX();
		middleY += rectangles[i].GetCentre()->GetY();
		std::cout << "X = " << rectangles[i].GetCentre()->GetX() << ";  "
			<< "Y = " << rectangles[i].GetCentre()->GetY() << ";  "
			<< "Length = " << rectangles[i].GetLength() << ";  "
			<< "Width = " << rectangles[i].GetWidth() << ";" << std::endl;
	}
	middleX /= 5;
	middleY /= 5;

	std::cout << std::endl;
	std::cout << "Xcenter = " << middleX << ";  "
				<< "Ycenter = " << middleY << std::endl;
}