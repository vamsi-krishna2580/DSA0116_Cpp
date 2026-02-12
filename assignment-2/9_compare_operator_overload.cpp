#include <iostream>
using namespace std;

class Person {
    int age;
public:
    Person(int a) {
         age = a; 
    }

    bool operator > (Person p) {
        return age > p.age;
    }
};

int main() {
    Person p1(25), p2(30);

    if (p1 > p2)
        cout << "P1 is older";
    else
        cout << "P2 is older";

    return 0;
}
