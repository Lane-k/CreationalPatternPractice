/**
 * @author Lane
 * @date dec 9 2025
 * @details An abstract factory defines a n interface for creting a whole family of objects
 * without needing to know any of the concrete classes or their creational methods. It makes
 * the process much simpler if you want a whole group of things
 * made and maybe stored for use later. Typically this group creation also utilizes
 * a base class factory, so for this example, I am going to extend my
 * carFactory example by adding new kinds of cars, and types.
 * ps. A little post-completion note - This turned out to be such a jank program lol. Don't copy my code, just
 * use it to learn because its a steaming pile of garbage.
*/

#include <iostream>
#include "Factory.hpp"
#include "AbstractFactory.hpp"

int main() {

    Dealership d;
    d.addFleet(d.makeFleet(dealerSpecialty::BOXER));
    d.addFleet(d.makeFleet(dealerSpecialty::ROTARY));
    d.addFleet(d.makeFleet(dealerSpecialty::V_8));
    d.listFleet();

    std::cout << '\n' << "You can see that with just a few functions, I was able to create "
    "up to 10 new vehicles, some of which have different body types among the same engine family. "
    "However, we never specified the number of doors, or the body style of the fleets, "
    "just the engine type for our dealership. So our abstract factory clearly allows us to "
    "make a family of abstracted objects without knowing or interacting with the concrete classes/constructors.";

    return 0;
}
