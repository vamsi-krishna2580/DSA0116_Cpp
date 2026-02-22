#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() { return 0; }
    virtual float perimeter() { return 0; }
};

class Rectangle : public Shape
{
    float l, w;

public:
    Rectangle(float a, float b)
    {
        l = a;
        w = b;
    }

    float area() { return l * w; }
    float perimeter() { return 2 * (l + w); }
};

class Triangle : public Shape
{
    float a, b, c;

public:
    Triangle(float x, float y, float z)
    {
        a = x;
        b = y;
        c = z;
    }

    float area() { return 0.5 * a * b; }
    float perimeter() { return a + b + c; }
};

int main()
{
    Shape *s;
    Rectangle r(10, 5);
    Triangle t(3, 4, 5);

    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;

    s = &t;
    cout << "Triangle Area: " << s->area() << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual float area() = 0;
//     virtual float perimeter() = 0;
// };

// class Rectangle : public Shape
// {
//     float length, width;

// public:
//     Rectangle(float l, float w)
//     {
//         length = l;
//         width = w;
//     }
//     float area() { return length * width; }
//     float perimeter() { return 2 * (length + width); }
// };

// class Triangle : public Shape
// {
//     float a, b, c;

// public:
//     Triangle(float x, float y, float z)
//     {
//         a = x;
//         b = y;
//         c = z;
//     }
//     float area() { return 0.5 * a * b; } // simple formula
//     float perimeter() { return a + b + c; }
// };

// int main()
// {
//     Rectangle r(10, 5);
//     Triangle t(3, 4, 5);

//     cout << "Rectangle Area: " << r.area() << endl;
//     cout << "Rectangle Perimeter: " << r.perimeter() << endl;

//     cout << "Triangle Area: " << t.area() << endl;
//     cout << "Triangle Perimeter: " << t.perimeter() << endl;

//     return 0;
// }
