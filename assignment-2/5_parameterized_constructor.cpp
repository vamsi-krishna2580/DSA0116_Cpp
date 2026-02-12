#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
public:
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main() {
    Employee e1(1, "Amit", 50000);
    e1.display();
    return 0;
}
