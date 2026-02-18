#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        try {
            if (b == 0)
                throw "Divide by zero error";

            if (a < 0)
                throw a;   // Throw integer exception

            cout << "Result = " << a / b << endl;
        }

        catch (const char* msg) {
            cout << "Inner Catch: " << msg << endl;
        }
    }

    catch (int x) {
        cout << "Outer Catch: Negative number " << x << endl;
    }

    return 0;
}
