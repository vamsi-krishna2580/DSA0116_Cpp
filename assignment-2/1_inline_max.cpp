#include <iostream>
using namespace std;

inline int maxNum(int a, int b) {
    return (a>b) ? a : b;
}

int main() {
    int x=10, y=20;
    cout << "Maximum = " << maxNum(x, y);
    return 0;
}
