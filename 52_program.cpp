#include <iostream>
using namespace std;

class Employee
{
public:
    virtual float calculatePay()
    {
        return 0;
    }
};

class Manager : public Employee
{
    float salary, bonus;

public:
    Manager(float s, float b)
    {
        salary = s;
        bonus = b;
    }

    float calculatePay()
    {
        return salary + bonus;
    }
};

class Engineer : public Employee
{
    float rate;
    int hours;

public:
    Engineer(float r, int h)
    {
        rate = r;
        hours = h;
    }

    float calculatePay()
    {
        return rate * hours;
    }
};

int main()
{
    Employee *e;
    Manager m(50000, 10000);
    Engineer en(50, 160);

    e = &m;
    cout << "Manager Pay: " << e->calculatePay() << endl;

    e = &en;
    cout << "Engineer Pay: " << e->calculatePay() << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     virtual float calculatePay() = 0;
// };

// class Manager : public Employee
// {
//     float salary, bonus;

// public:
//     Manager(float s, float b)
//     {
//         salary = s;
//         bonus = b;
//     }
//     float calculatePay() { return salary + bonus; }
// };

// class Engineer : public Employee
// {
//     float hourlyRate;
//     int hours;

// public:
//     Engineer(float r, int h)
//     {
//         hourlyRate = r;
//         hours = h;
//     }
//     float calculatePay() { return hourlyRate * hours; }
// };

// int main()
// {
//     Manager m(50000, 10000);
//     Engineer e(50, 160);

//     cout << "Manager Pay: " << m.calculatePay() << endl;
//     cout << "Engineer Pay: " << e.calculatePay() << endl;

//     return 0;
// }
