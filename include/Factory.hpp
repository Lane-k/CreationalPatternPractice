/**
 * @author Lane
 * @date dec 8 2025
 * @details a class to showcase the use of the factory method to define creational methods
 * for making subclassed objects that make use of an interface superclass. (abstract)
*/

#ifndef FACTORY_H_
#define FACTORY_H_

enum vehicleTypes {COUPE, SEDAN};

/**
 * @class car "carFactory.hpp"
 * @details abstract class that defines a car and provides
 * a pure virtual function to subclasses that outputs
 * the number of doors for subclass type verification
 */
class vehicle {
 public:
    /**
     * @param [in] sets the door count of our vehicle
     * @details used by subclasses to set the doors parameter.
     * Showcases how we can use a factory to hide how we make certain objects
     * and use different methods
     */
   vehicle(int);
    /**
     * @brief states the doors on the vehicle we make
     * @details pure virtual based on the car class
     */
  virtual void doorCount() = 0;

  virtual ~vehicle();
 protected:
    int doors;
};
/**
 * @class coupe "carFactory.hpp"
 * @brief a car with 2 doors (usually)
 */
class coupe : public vehicle {
 public:
    coupe(int);
    void doorCount();
};
/**
 * @class sedan "carFactory.hpp"
 * @brief a car with 4 doors
 */
class sedan : public vehicle {
 public:
    sedan(int);
    void doorCount();
};

/**
 * @class carFactory "Factory.hpp"
 */
class carFactory {
 public:
  vehicle* makeCar(vehicleTypes);
};

#endif
