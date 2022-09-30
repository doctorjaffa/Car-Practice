// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

int main()
{
    
    Car car1("Average", "Words", 4, 45.0f);
    Car car2("Speed", "Fancy", 2, 30.0f);
    Car car3("Forb", "Family", 6, 50.0f);

    car1.Print();
    car2.Print();
    car3.Print();

    float miles;
    std::cout << "Please enter the miles driven: ";
    std::cin >> miles;

    car1.Drive(miles);

    car1.Print();

    Car car4;
    car4.Print();

}
