// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Car.h"
#include "ParkingSpace.h"
#include "CarPark.h"

int main()
{
    //Create car instances.
    Car car1("Average", "Words", 4, 45.0f, 1);
    Car car2("Speed", "Fancy", 2, 30.0f, 2);
    Car car3("Forb", "Family", 6, 50.0f, 3);
    Car car4;

    //Create a car park instance.
    CarPark carPark;

    //Create the parking space instances.
    ParkingSpace parkSpace;
    ParkingSpace parkSpace2;
    ParkingSpace parkSpace3;
    ParkingSpace parkSpace4;

    //Populate carParkVector with the parking spaces.
    carPark.carParkVector.push_back(parkSpace);
    carPark.carParkVector.push_back(parkSpace2);
    carPark.carParkVector.push_back(parkSpace3);
    carPark.carParkVector.push_back(parkSpace4);

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
    */

    /*
    std::map<int, Car> carMap;
    carMap[car1.serialNo] = car1;
    carMap[car2.serialNo] = car2;
    carMap[car3.serialNo] = car3;


    std::cout << "\nPlease enter the serial number for your car: ";
    int userSerial;
    std::cin >> userSerial;

    Car userCar;
    if (carMap.find(userSerial) != carMap.end())
    {
        userCar = carMap[userSerial];
    }

    //parkSpace.Park(car1);

    if (parkSpace.isSpaceFull == false)
    {
        parkSpace.Park(userCar);
    }
    else
    {
        std::cout << "\nThis space is occupied.";
    }

    parkSpace.Print();
    parkSpace.Exit();

    */

    //Park cars in the carParkVector.
    carPark.Park(car1);
    carPark.Park(car3);
    carPark.Park(car2);

    //carPark.PrintAll();

    //Print the car currently parked in space 2, then have that car exit the space.
    carPark.Print(2);
    carPark.Exit(2);

    //Park a new car in the carParkVector and print the same space as before.
    carPark.Park(car3);
    carPark.Print(2);
}
