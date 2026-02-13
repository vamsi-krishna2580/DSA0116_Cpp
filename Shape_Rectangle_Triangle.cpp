#include <iostream>
using namespace std;

class Shape
{
protected:
    float height, width;

public:
    void setHeight(float h) { height = h; }
    void setWidth(float w) { width = w; }
};

class Rectangle : public Shape
{
public:
    float area() { return height * width; }
    float perimeter() { return 2 * (height + width); }
};

class Triangle : public Shape
{
public:
    float area() { return 0.5 * height * width; }
    float perimeter() { return 3 * width; }
};

int main()
{
    Rectangle r;
    r.setHeight(10);
    r.setWidth(5);

    Triangle t;
    t.setHeight(8);
    t.setWidth(4);

    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Rectangle Perimeter: " << r.perimeter() << endl;

    cout << "Triangle Area: " << t.area() << endl;
    cout << "Triangle Perimeter: " << t.perimeter() << endl;

    return 0;
}
