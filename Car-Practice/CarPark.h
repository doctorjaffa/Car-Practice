#pragma once
#include <string>
#include <vector>
#include "Car.h"
#include "ParkingSpace.h"

class CarPark
{
public:

	//Constructors/Destructors.
	CarPark();
	~CarPark();

	//Class functions.
	void Park(Car toPark);
	void Exit(int spaceNo);
	void Print(int spaceNo);
	void PrintAll();

	//Class variables.
	std::vector<ParkingSpace> carParkVector;
	int spaceNo;
};

