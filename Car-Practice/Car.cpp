#include "Car.h"
#include <iostream>

//Default constructor.
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

//User populated constructor.
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

//Default destructor.
Car::~Car()
{
    //std::cout << "\n" << make << " " << model <<  " destroyed.";
}

//Print the car information.
void Car::Print()
{
    std::cout << "\nCar Make: " << make << std::endl << "Car Model: " << model << std::endl << "Number of doors: " << doors << std::endl <<
        "Mileage: " << mileage << std::endl << "Miles per Gallon: " << mpg << std::endl << "Petrol: " << petrol << std::endl;

    std::cout << std::endl;

}

//Drive the car a given distance. 
void Car::Drive(float miles)
{

    std::cout << "\n" << model << " " << make << " driving " << miles << " miles.\n";

    //Calculate the amount of fuel used.
    float fuelUsed; 
    fuelUsed = miles / mpg;

    //If the petrol will go below empty, determine how far the car can drive before running out.
    if (petrol - fuelUsed <= 0)
    {
        float actualMiles;
        actualMiles = petrol * mpg;

        petrol = 0;

        //Add the miles able to be driven to the car mileage.
        mileage += actualMiles;

        std::cout << "\nYou have run out of fuel.\n";
    }
    //If the car will not run of petrol, simply subtract the fuel used and add the miles driven to the mileage.
    else
    {
        petrol -= fuelUsed;

        mileage += miles;
    }


}
