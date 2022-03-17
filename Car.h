#pragma once
#include "Vehicle.h"

struct Car : Vehicle
{
    Car(const std::string& s);
    void closeWindows();

    void tryToEvade() override;
    void setSpeed(int s) override;
};
