#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0; 
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float area() { return length * width; }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r) { radius = r; }
    float area() { return 3.14 * radius * radius; }
};

int main()
{
    Rectangle r(10, 5);
    Circle c(7);

    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Circle Area: " << c.area() << endl;

    return 0;
}
