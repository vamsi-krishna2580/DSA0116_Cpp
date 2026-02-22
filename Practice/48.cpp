#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string make;
    string model;
    int year;
    void get_Vehicle()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
    void set_Vehicle(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }
};
class car : public Vehicle
{
    int seating_capacity;
    string fuel_type;

public:
    void set_car(string make, string model, int year, int seating_capacity, string fuel_type)
    {
        set_Vehicle(make, model, year);
        this->seating_capacity = seating_capacity;
        this->fuel_type = fuel_type;
    }
    void get_car()
    {
        get_Vehicle();
        cout << "seating_capacity: " << seating_capacity << endl;
        cout << "fuel_type: " << fuel_type << endl;
    }
};
class Truck : public Vehicle
{
    int payload_capacity;
    int towing_capacity;

public:
    void get_Truck()
    {
        get_Vehicle();
        cout << "payload_capacity: " << payload_capacity << endl;
        cout << "towing_capacity: " << towing_capacity << endl;
    }
    void set_Truck(string make, string model, int year, int payload_capacity, int towing_capacity)
    {
        set_Vehicle(make, model, year);
        this->payload_capacity = payload_capacity;
        this->towing_capacity = towing_capacity;
    }
};

int main()
{

    // Car object
    car c;
    c.set_car("Toyota", "Innova", 2022, 7, "Diesel");

    cout << "\n--- Car Details ---\n";
    c.get_car();

    // Truck object
    Truck t;
    t.set_Truck("Tata", "Signa", 2020, 16000, 25000);

    cout << "\n--- Truck Details ---\n";
    t.get_Truck();

    return 0;
}