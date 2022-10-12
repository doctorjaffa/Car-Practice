#pragma once
#include "Car.h"
class ParkingSpace
{
public:

	//Constructors/Destructors.
	ParkingSpace();
	~ParkingSpace();

	//Class functions.
	void Park(Car carParking);
	void Exit();
	void Print();

	//Class variables.
	bool isSpaceFull;
	Car parkedCar;
};

