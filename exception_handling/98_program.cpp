#include<iostream>
using namespace std;

// User-defined exception class
class MyException {
public:
    void showError() {
        cout << "Custom Exception: Divide by zero is not allowed";
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw MyException();   // Throw user-defined exception

        cout << "Result = " << a / b << endl;
    }

    catch (MyException e) {
        e.showError();
    }

    return 0;
}
