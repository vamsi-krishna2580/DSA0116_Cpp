#include<iostream>
#include<exception>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    try {
        if (b == 0)
            throw exception();

        cout << "Result = " << a / b << endl;
    }

    catch (exception& e) {
        cout << "Standard Exception Caught: " << e.what() << endl;
    }

    return 0;
}
