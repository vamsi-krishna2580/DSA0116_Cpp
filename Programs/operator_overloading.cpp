#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) { // it replaces both null and parameterized constructors
        real = r;
        imag = i;
    }
    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    Complex  c1(2.5,3.5),c2(4.5,2.2), c3;
    c3 = c1 + c2;
    cout << "Result: ";
    c3.display();

    return 0;
}
