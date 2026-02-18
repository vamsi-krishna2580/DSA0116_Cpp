#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Divide by zero error";

        cout << "Result = " << a / b << endl;
    }

    catch (const char* msg) {
        cout << "Exception Caught: " << msg << endl;
    }

    // Works like finally block
    cout << "This block always executes (Finally-like block)" << endl;

    return 0;
}
