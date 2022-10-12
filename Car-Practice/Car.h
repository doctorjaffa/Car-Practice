#pragma once

#include <string>

class Car
{
public:

	//Constructors/Destructors.
	Car();
	Car(std::string newMake, std::string newModel, int newDoors, float newMpg, int newSerialNo);

	~Car();

	//Class functions.
	void Print();
	void Drive(float miles);

	//Class variables.
	std::string make;
	std::string model;
	int doors;
	float mileage;
	float mpg;
	float petrol;
	int serialNo;
};

