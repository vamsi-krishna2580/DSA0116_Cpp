#include <iostream>
using namespace std;

float area(float r) {
    return 3.14*r*r;
}

int area(int l, int b) {
    return l*b;
}

float area(float base, float height) {
    return 0.5*base*height;
}

int main() {
    cout << "Circle Area = " << area(5.0f) << endl;
    cout << "Rectangle Area = " << area(4, 6) << endl;
    cout << "Triangle Area = " << area(4.0f, 5.0f) << endl;
    return 0;
}
