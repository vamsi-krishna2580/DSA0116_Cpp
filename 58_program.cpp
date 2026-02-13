#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Herbivore : public Animal {
public:
    void eat() override {
        cout << "Herbivore eats plants" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        cout << "Carnivore eats meat" << endl;
    }
};

int main() {
    Animal* a;
    Herbivore h;
    Carnivore c;

    a = &h;
    a->eat();

    a = &c;
    a->eat();

    return 0;
}
