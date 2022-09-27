#include "Car.h"
#include <iostream>

void Car::Print()
{
    std::cout << "\nCar Make: " << make << std::endl << "Car Model: " << model << std::endl << "Number of doors: " << doors << std::endl <<
        "Mileage: " << mileage << std::endl << "Miles per Gallon: " << mpg << std::endl << "Petrol: " << petrol << std::endl;

    std::cout << std::endl;

}

void Car::Drive(float miles)
{

    std::cout << "\n" << model << " " << make << " driving " << miles << " miles.\n";

    float fuelUsed; 
    fuelUsed = miles / mpg;

    if (petrol - fuelUsed <= 0)
    {
        float actualMiles;
        actualMiles = petrol * mpg;

        petrol = 0;

        mileage += actualMiles;

        std::cout << "\nYou have run out of fuel.\n";
    }
    else
    {
        petrol -= fuelUsed;

        mileage += miles;
    }


}
