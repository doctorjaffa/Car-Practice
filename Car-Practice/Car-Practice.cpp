// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

void Print(Car outputCar)
{
    std::cout << "Car Make: " << outputCar.make << std::endl << "Car Model: " << outputCar.model << std::endl << "Number of doors: " << outputCar.doors << std::endl <<
        "Mileage: " << outputCar.mileage << std::endl << "Miles per Gallon: " << outputCar.mpg << std::endl << "Petrol: " << outputCar.petrol << std::endl;

}
int main()
{
    
    Car car1;
    car1.make = "";
    car1.model = "";
    car1.doors = 4;
    car1.mileage = 0.0f;
    car1.mpg = 0.0f;
    car1.petrol = 0.0f;

    Car car2;
    car2.make = "";
    car2.model = "";
    car2.doors = 4;
    car2.mileage = 0.0f;
    car2.mpg = 0.0f;
    car2.petrol = 0.0f;

    Car car3;
    car3.make = "";
    car3.model = "";
    car3.doors = 4;
    car3.mileage = 0.0f;
    car3.mpg = 0.0f;
    car3.petrol = 0.0f;


    Print(car1);
    Print(car2);
    Print(car3);

}
