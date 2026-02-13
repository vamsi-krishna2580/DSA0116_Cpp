#include <iostream>
using namespace std;

class Person {
public:
    virtual void greet() {
        cout << "Hello from Person" << endl;
    }
};

class Student : public Person {
public:
    void greet() override {
        cout << "Hello from Student" << endl;
    }
};

class Teacher : public Person {
public:
    void greet() override {
        cout << "Hello from Teacher" << endl;
    }
};

int main() {
    Person* p;
    Student s;
    Teacher t;

    p = &s;
    p->greet();

    p = &t;
    p->greet();

    return 0;
}
