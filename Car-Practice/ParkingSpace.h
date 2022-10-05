#pragma once
#include "Car.h"
class ParkingSpace
{
public:
	ParkingSpace();
	~ParkingSpace();

	void Park(Car carParking);
	void Exit();
	void Print();

	bool isSpaceFull;
	Car parkedCar;
};

