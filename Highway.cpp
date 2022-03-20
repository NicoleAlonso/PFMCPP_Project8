#include "Highway.h"
#include "SemiTruck.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Vehicle.h"
#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    //assert(false);
    if(auto* semiTruck = dynamic_cast<SemiTruck*>(v))
    {
        semiTruck->letOthersOvertake();
    } 
    else if(auto* car = dynamic_cast<Car*>(v))
    {
        car->closeWindows();
    } 
    else if(auto* moto = dynamic_cast<Motorcycle*>(v))
    {
        moto->lanesplitAndRace();
    }    
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    //assert(false);
    if(auto* semiTruck = dynamic_cast<SemiTruck*>(v))
    {
        semiTruck->pullOver();
    } 
    else if(auto* car = dynamic_cast<Car*>(v))
    {
        car->tryToEvade();
    } 
    else if(auto* moto = dynamic_cast<Motorcycle*>(v))
    {
        moto->tryToEvade();
    }
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), vehicles.end(), v), vehicles.end());
    removeVehicleInternal(v);
}
