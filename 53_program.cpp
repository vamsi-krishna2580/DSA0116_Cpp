#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void drive()
    {
        cout << "Vehicle is moving\n";
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving\n";
    }
};

class Truck : public Vehicle
{
public:
    void drive()
    {
        cout << "Truck is driving\n";
    }
};

int main()
{
    Vehicle *v;
    Car c;
    Truck t;

    v = &c;
    v->drive();

    v = &t;
    v->drive();

    return 0;
}

// #include <iostream>
// using namespace std;

// class Vehicle
// {
// public:
//     virtual void drive()
//     {
//         cout << "Vehicle is moving\n";
//     }
// };

// class Car : public Vehicle
// {
// public:
//     void drive()
//     {
//         cout << "Car is driving\n";
//     }
// };

// class Truck : public Vehicle
// {
// public:
//     void drive()
//     {
//         cout << "Truck is driving\n";
//     }
// };

// int main()
// {
//     Vehicle *v;
//     Car c;
//     Truck t;

//     v = &c;
//     v->drive();

//     v = &t;
//     v->drive();

//     return 0;
// }

// // #include <iostream>
// // using namespace std;

// // class Vehicle
// // {
// // public:
// //     virtual void drive() = 0;
// // };

// // class Car : public Vehicle
// // {
// // public:
// //     void drive() { cout << "Car is driving on road\n"; }
// // };

// // class Truck : public Vehicle
// // {
// // public:
// //     void drive() { cout << "Truck is carrying heavy load\n"; }
// // };

// // int main()
// // {
// //     Car c;
// //     Truck t;

// //     c.drive();
// //     t.drive();

// //     return 0;
// // }
