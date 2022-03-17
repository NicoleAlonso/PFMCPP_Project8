#pragma once
#include <iostream>
#include <limits>
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);
    
    void doNotEvade();
};
