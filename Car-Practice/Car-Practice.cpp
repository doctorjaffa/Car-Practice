// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

void Print(Car outputCar)
{
    std::cout << "Car Make: " << outputCar.make << std::endl << "Car Model: " << outputCar.model << std::endl << "Number of doors: " << outputCar.doors << std::endl <<
        "Mileage: " << outputCar.mileage << std::endl << "Miles per Gallon: " << outputCar.mpg << std::endl << "Petrol: " << outputCar.petrol << std::endl;

    std::cout << std::endl;

}
int main()
{
    
    Car car1;
    car1.make = "Average";
    car1.model = "Words";
    car1.doors = 4;
    car1.mileage = 1500.0f;
    car1.mpg = 45.0f;
    car1.petrol = 350.0f;

    Car car2;
    car2.make = "Speed";
    car2.model = "Fancy";
    car2.doors = 2;
    car2.mileage = 1200.0f;
    car2.mpg = 30.0f;
    car2.petrol = 300.0f;

    Car car3;
    car3.make = "Forb";
    car3.model = "Family";
    car3.doors = 6;
    car3.mileage = 2000.0f;
    car3.mpg = 50.0f;
    car3.petrol = 400.0f;


    Print(car1);
    Print(car2);
    Print(car3);

}
