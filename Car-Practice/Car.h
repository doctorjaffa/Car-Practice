#pragma once

#include <string>

class Car
{
public:

	void Print();
	void Drive(float miles);

	std::string make;
	std::string model;
	int doors;
	float mileage;
	float mpg;
	float petrol;
};

