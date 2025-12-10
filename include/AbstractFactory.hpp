/**
 * @author Lane Koevort
 * @date dec 9 2025
*/
#ifndef ABSTRACT_FAC_H_
#define ABSTRACT_FAC_H_

#include <vector>
#include <string>
#include "Factory.hpp"

enum dealerSpecialty {ROTARY, BOXER, V_8};

class rotary : public vehicle {
 public:
  rotary(vehicleTypes, int);
  void doorCount();
  ~rotary();
 private:
  vehicleTypes body;
};

class boxer : public vehicle {
 public:
  boxer(vehicleTypes, int);
  void doorCount();
  ~boxer();
 private:
  vehicleTypes body;
};

class V8 : public vehicle {
 public:
  V8(vehicleTypes, int);
  void doorCount();
  ~V8();
 private:
  vehicleTypes body;
};

class Dealership {
 public:
  Dealership();
  /**
   * @brief returns a pointer to a fleet of the specified vehicle category
   */
  std::vector<vehicle*> makeFleet(dealerSpecialty);
  /**
   * @brief deep copy of vector, then clear the old one
   */
  void addFleet(std::vector<vehicle*>);
  /**
   * @brief lists all vehicle types in the fleet
  */
  void listFleet();
  /**
   * @brief Delete fleet + carMaker
   */
  ~Dealership();
 private:
 std::vector<vehicle*> DealerFleet;
};

#endif
