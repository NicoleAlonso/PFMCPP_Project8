#pragma once
#include <iostream>
#include <limits>
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    void letOthersOvertake();
    void doNotEvade();
};
