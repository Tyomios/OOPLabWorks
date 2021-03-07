#include "StructsAndMemory.h"


void DemoDynamicFlight()
{
	Flight* flight = new Flight;

	flight->StartPoint = "Moscow";
	flight->EndPoint = "Saint-Petersburg";
	flight->TimeOfFlightMinutes = 45;

	std::cout << "Flight " << flight->StartPoint
		<< " - " << flight->EndPoint
		<< " continuing " << flight->TimeOfFlightMinutes
		<< std::endl;

	delete flight;
}


void DemoDynamicFligths()
{
	Flight* flights = new Flight[4];

	flights[0].StartPoint = "Moscow";
	flights[0].EndPoint = "Saint-Petersburg";
	flights[0].TimeOfFlightMinutes = 45;

	flights[1].StartPoint = "Tomsk";
	flights[1].EndPoint = "Moscow";
	flights[1].TimeOfFlightMinutes = 190;

	flights[2].StartPoint = "Berlin";
	flights[2].EndPoint = "London";
	flights[2].TimeOfFlightMinutes = 105;

	flights[3].StartPoint = "Moscow";
	flights[3].EndPoint = "Barselone";
	flights[3].TimeOfFlightMinutes = 180;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "Flight " << flights[i].StartPoint
			<< " - " << flights[i].EndPoint
			<< " continuing " << flights[i].TimeOfFlightMinutes
			<< std::endl;
	}

	FindShortestFlight(flights, 4);
	delete[] flights;
}


void FindShortestFlight(Flight* flights, int size)
{
	Flight leastTime = flights[0];
	for (int i = 0; i < size; i++)
	{
		if (flights[i].TimeOfFlightMinutes < leastTime.TimeOfFlightMinutes)
		{
			leastTime = flights[i];
		}
	}

	std::cout << "The shortest flight " << leastTime.StartPoint
		<< " - " << leastTime.EndPoint
		<< " continuing " << leastTime.TimeOfFlightMinutes
		<< std::endl;
}
