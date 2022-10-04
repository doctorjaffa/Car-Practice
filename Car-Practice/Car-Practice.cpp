// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Car.h"

int main()
{
    
    Car car1("Average", "Words", 4, 45.0f);
    Car car2("Speed", "Fancy", 2, 30.0f);
    Car car3("Forb", "Family", 6, 50.0f);
    Car car4;

    /*
    car1.Print();
    car2.Print();
    car3.Print();
    

    float miles;
    std::cout << "Please enter the miles driven: ";
    std::cin >> miles;

    car1.Drive(miles);

    car1.Print();

    car4.Print();
    */

    std::vector<Car> carVector;
    
    carVector.push_back(car1);
    carVector.push_back(car2);
    carVector.push_back(car3);
    carVector.push_back(car4);

    for (int i = 0; i < carVector.size(); ++i)
    {
        carVector[i].Print();
    }

    Car carArray[4];

    carArray[0] = car1;
    carArray[1] = car2;
    carArray[2] = car3;
    carArray[3] = car4;

    for (int i = 0; i < 4; ++i)
    {
        carArray[i].Print();
    }
}
