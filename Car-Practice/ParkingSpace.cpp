#include "ParkingSpace.h"
#include <string>
#include <iostream>

ParkingSpace::ParkingSpace()
	: isSpaceFull(false)
	, parkedCar()
{
}

ParkingSpace::~ParkingSpace()
{
	//std::cout << "Parking space has been destroyed.";
}

void ParkingSpace::Park(Car carParking)
{
	 isSpaceFull = true;
	 parkedCar = carParking;
}

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
