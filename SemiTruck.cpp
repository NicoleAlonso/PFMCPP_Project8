#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::doNotEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, is there any problem?" << std::endl;
}

