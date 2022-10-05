#include "Car.h"
#include <iostream>

Car::Car()
    : make("")
    , model("")
    , doors(0)
    , mileage(0)
    , mpg(0)
    , petrol(0)
    , serialNo(0)
{
    //std::cout << "\nCar constructed.";
}

Car::Car(std::string newMake, std::string newModel, int newDoors, float newMpg, int newSerialNo)
    : make(newMake)
    , model(newModel)
    , doors(newDoors)
    , mileage(0)
    , mpg(newMpg)
    , petrol(200)
    , serialNo(newSerialNo)
{
    //std::cout << "\nCar constructed.";
}

Car::~Car()
{
    //std::cout << "\n" << make << " " << model <<  " destroyed.";
}

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
