#pragma once

#include <string>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel, int newDoors, float newMpg);

	~Car();

	void Print();
	void Drive(float miles);

	std::string make;
	std::string model;
	int doors;
	float mileage;
	float mpg;
	float petrol;
};

