#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

SemiTruck::~SemiTruck() {}

void SemiTruck::letOthersOvertake()
{
    setSpeed(70);
    std::cout << name << " is letting faster vehicles overtake" << std::endl;
}

void SemiTruck::doNotEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, is there any problem?" << std::endl;
}

