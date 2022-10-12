#include "ParkingSpace.h"
#include <string>
#include <iostream>

//Default constructor.
ParkingSpace::ParkingSpace()
	: isSpaceFull(false)
	, parkedCar()
{
}

//Default destructor.
ParkingSpace::~ParkingSpace()
{
	//std::cout << "Parking space has been destroyed.";
}

//Park a car inside the parking space and store that car instance in parkedCar.
void ParkingSpace::Park(Car carParking)
{
	 isSpaceFull = true;
	 parkedCar = carParking;
}

//Remove a car from the parking space, if there is one occupying it.
void ParkingSpace::Exit()
{
	if (isSpaceFull == false)
	{
		std::cout << "\nThis space is already empty.";
	}
	else
	{
		std::cout << "\nThe " << parkedCar.make << " " << parkedCar.model << " exits the space." << std::endl;
		isSpaceFull = false;
	}
}

//Print the name of the car parked in the parking space, if there is one occupying the space.
void ParkingSpace::Print()
{
	if (isSpaceFull == false)
	{
		std::cout << "\nParking space is empty.";
	}
	else
	{
		std::cout << "\nSpace is occupied right now by a " << parkedCar.make << " " << parkedCar.model << std::endl;
	}
}
