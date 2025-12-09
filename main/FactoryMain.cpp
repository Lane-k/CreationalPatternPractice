/**
 *@author Lane Koevort
 @date dec 8 2025
 @details a simple main to showcase how we can use the factory method
 to create an abstract vehicle poiner, and have it return the type of vehicle we want by utilising
 creational methods that the user (us) doesn't need to know or doesn't care to know.
*/

#include <iostream>

#include "Factory.hpp"

int main() {

    vehicle* currentVehicle = nullptr;
    carFactory Factory;
    currentVehicle = Factory.makeCar(vehicleTypes::COUPE);
    currentVehicle->doorCount();

    delete currentVehicle;
    currentVehicle = nullptr;

    currentVehicle = Factory.makeCar(vehicleTypes::SEDAN);
    currentVehicle->doorCount();

    delete currentVehicle;
    currentVehicle = nullptr;

    std::cout << "As you can see, we used a factory to make our two objects as specified, "
    "but we don't need to know what parameters get passed into the constructors or the explicit "
    "type constructor that needs calling. It preserves encapsulation and makes abstract "
    "type creation easy via a construction interface - Being the factory";

    return 0;
}
