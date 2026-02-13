#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int reg;

public:
    void disp()
    {
        cout << "name: " << name << endl;
        cout << "reg: " << reg << endl;
    }
};

class student : public person
{
public:
    int m1, m2, m3, total;
    float avg;

public:

    void caluclate()
    {
        total = m1 + m2 + m3;
        avg = total / 3.0;
    }
    void display()
    {
        disp();
        cout << "total: " << total << endl;
        cout << "avg: " << avg << endl;
    }
};

int main()
{
    student s1;
    s1.name = "vamsi";
    s1.reg = 111;
    s1.m1 = 98;
    s1.m2 = 99;
    s1.m3 = 100;
    s1.caluclate();
    s1.display();
}