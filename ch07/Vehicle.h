#ifndef VEHICLE
#define VEHICLE

#include <string>
#include <iostream>

class Vehicle
{
    public:
    Vehicle() = default;
    Vehicle(std::istream &is)
    {
        is >> brand >> area;
        is >> volume;
    }
    Vehicle(std::string b) : Vehicle(b, "", 0) {}
    Vehicle(std::string b, std::string a, double v) : brand(b), area(a), volume(v) {}
    private:
    std::string  brand = "";
    double volume = 0;
    std::string area = "";
};

/*
Vehicle::Vehicle(std::istream &is)
{
    //is >> volume;
}
*/

#endif