#include <iostream>
using namespace std;
class Box {
    int l, b, h;
public:
    Box() { l = b = h = 1; }
    Box(int x) { l = b = h = x; }
    Box(int x, int y, int z) { l = x; b = y; h = z; }

    void display() {
        cout << "Dimensions: " << l << " " << b << " " << h << endl;
    }
};
int main() {
    Box b1;
    Box b2(5);
    Box b3(2,3,4);

    b1.display();
    b2.display();
    b3.display();
    return 0;
}
