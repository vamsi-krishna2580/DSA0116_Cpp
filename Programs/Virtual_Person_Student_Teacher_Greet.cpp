#include <iostream>
using namespace std;

class Person {
public:
    virtual void work() {
        cout << "Person works" << endl;
    }
};

class Employee : public Person {
public:
    void work() override {
        cout << "Employee works on tasks" << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "Manager manages team" << endl;
    }
};

int main() {
    Person* p;
    Employee e;
    Manager m;

    p = &e;
    p->work();

    p = &m;
    p->work();

    return 0;
}
