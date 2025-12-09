/**
 * @author Lane
 * @date dec 8 2025
*/
#include <iostream>

#include "Factory.hpp"

vehicle::vehicle(int doornum) : doors(doornum) {}

vehicle::~vehicle() {}

void coupe::doorCount() {
    if (this == nullptr) {std::cout << "Nullptrs have no doors" << '\n'; return;}
    std::cout << "A coupe has: " << doors << " doors" << '\n';
}

void sedan::doorCount() {
    if (this == nullptr) {std::cout << "Nullptrs have no doors" << '\n'; return;}
    std::cout << "A sedan has: " << doors << " doors" << '\n';
}

coupe::coupe(int num) : vehicle(num) {}

sedan::sedan(int num) : vehicle(num) {}

vehicle* carFactory::makeCar(vehicleTypes vt) {
    switch(vt) {
    case(COUPE) :
     return new coupe(2);
    case(SEDAN) :
     return new sedan(4);
    default :
     return nullptr;
    }
}
