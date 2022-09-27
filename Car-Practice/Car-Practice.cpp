// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

int main()
{
    
    Car car1;
    car1.make = "Average";
    car1.model = "Words";
    car1.doors = 4;
    car1.mileage = 1500.0f;
    car1.mpg = 45.0f;
    car1.petrol = 10;

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


    car1.Print();
    car2.Print();
    car3.Print();

    float miles;
    std::cout << "Please enter the miles driven: ";
    std::cin >> miles;

    car1.Drive(miles);

    car1.Print();

}
