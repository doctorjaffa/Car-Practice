#include "CarPark.h"
#include <iostream>

//Default constructor.
CarPark::CarPark()
	: carParkVector()
	, spaceNo()
{
	//std::cout << "\nCar park has been created.";
}

//Default destructor.
CarPark::~CarPark()
{
	//std::cout << "\nCar park has been destroyed.";
}

//Allow a car to park in an empty parking space within the car park, if one is available.
void CarPark::Park(Car toPark)
{
	for (int i = 0; i < carParkVector.size(); ++i)
	{
		if (carParkVector[i].isSpaceFull == false)
		{
			carParkVector[i].Park(toPark);
			std::cout << "\n" << toPark.make << " " << toPark.model << " parked in space " << i << std::endl;
			break;
		}
		else
		{
			//std::cout << "\nThere are no available parking spaces.";
		}
	}
}

//Remove a car from the parking space (index number) that matches the space number given by a user. 
void CarPark::Exit(int spaceNo)
{
	carParkVector[spaceNo].Exit();
}

//Print the car parked in the parking space the user chooses.
void CarPark::Print(int spaceNo)
{
	carParkVector[spaceNo].Print();
}

//Print every car parked within the car park vector.
void CarPark::PrintAll()
{
	for (int i = 0; i < carParkVector.size(); ++i)
	{
		carParkVector[i].Print();
	}
}
