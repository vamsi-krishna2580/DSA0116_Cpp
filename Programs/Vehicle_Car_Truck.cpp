#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string make, model;
    int year;

public:
    void setMake(string m) { make = m; }
    string getMake() { return make; }
};

class Car : public Vehicle
{
protected:
    int seatingCapacity;
    string fuelType;

public:
    void setFuelType(string f) { fuelType = f; }
    string getFuelType() { return fuelType; }
};

class Truck : public Vehicle
{
protected:
    float payloadCapacity, towingCapacity;

public:
    void setPayload(float p) { payloadCapacity = p; }
    float getPayload() { return payloadCapacity; }
};

int main()
{
    Car c;
    c.setMake("Toyota");
    c.setFuelType("Petrol");

    Truck t;
    t.setMake("Volvo");
    t.setPayload(5000);

    cout << "Car Make: " << c.getMake() << endl;
    cout << "Car Fuel: " << c.getFuelType() << endl;

    cout << "Truck Make: " << t.getMake() << endl;
    cout << "Truck Payload: " << t.getPayload() << endl;

    return 0;
}
