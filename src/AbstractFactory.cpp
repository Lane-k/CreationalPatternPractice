/**
 * @author Lane Koevort
 * @date dec 9 2025
*/

#include <iostream>
#include "Factory.hpp"
#include "AbstractFactory.hpp"

class vehicle;

//jank code I know
rotary::rotary(vehicleTypes v, int d) : vehicle(d), body(v) {}
rotary::~rotary() {}
void rotary::doorCount() {
    switch(body) {
        case vehicleTypes::COUPE :
        std::cout << "This rotary coupe has " << doors << " doors" << '\n';
        break;
        case vehicleTypes::SEDAN :
        std::cout << "This rotary sedan has " << doors << " doors" << '\n';
        break;
    }
}

boxer::boxer(vehicleTypes v, int d) : vehicle(d), body(v) {}
boxer::~boxer() {}
void boxer::doorCount() {
    switch(body) {
        case vehicleTypes::COUPE :
        std::cout << "This boxer coupe has " << doors << " doors" << '\n';
        break;
        case vehicleTypes::SEDAN :
        std::cout << "This boxer sedan has " << doors << " doors" << '\n';
        break;
    }
}

V8::V8(vehicleTypes v, int d) : vehicle(d), body(v) {}
V8::~V8() {}
void V8::doorCount() {
    switch(body) {
        case vehicleTypes::COUPE :
        std::cout << "This V8 coupe has " << doors << " doors" << '\n';
        break;
        case vehicleTypes::SEDAN :
        std::cout << "This V8 sedan has " << doors << " doors" << '\n';
        break;
    }
}

Dealership::Dealership() {}
void Dealership::addFleet(std::vector<vehicle*> input) {
    if (input.empty()) {return;}
    for (int i = 0; i < input.size(); ++i) {
        DealerFleet.push_back(input[i]);
    }
    input.clear();
}
std::vector<vehicle*> Dealership::makeFleet(dealerSpecialty ds) {
    int i = 0;
    std::vector<vehicle*> tempVec;
    switch(ds) {
        //Ideally, this code block should be called boxerFactory or something similar
        //Abstract factories are supposed to use the concrete factories.
        case dealerSpecialty::BOXER :
        do {
            tempVec.push_back(new boxer(vehicleTypes::COUPE, 2));
            ++i;
        } while (i < 2);
        i = 0;
        do {
            tempVec.push_back(new boxer(vehicleTypes::SEDAN, 4));
            ++i;
        } while (i < 2);
        break;
        case dealerSpecialty::ROTARY :
        do {
            tempVec.push_back(new rotary(vehicleTypes::COUPE, 2));
            ++i;
        } while (i < 3);
        break;
        case dealerSpecialty::V_8 :
        do {
            tempVec.push_back(new V8(vehicleTypes::SEDAN, 4));
            ++i;
        } while (i < 3);
        break;
    }
    return tempVec;
}

void Dealership::listFleet() {
    for (int i = 0; i < DealerFleet.size(); ++i) {
        std::cout << "Vehicle #" << (i+1) << " ";
        DealerFleet[i]->doorCount();
    }
}

Dealership::~Dealership() {
    for (int i = 0; i < DealerFleet.size(); ++i) {
        delete DealerFleet[i];
        DealerFleet[i] = nullptr;
    }
    DealerFleet.clear();
}
