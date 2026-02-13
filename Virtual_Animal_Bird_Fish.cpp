#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void move()
    {
        cout << "Animal moves\n";
    }
};

class Bird : public Animal
{
public:
    void move()
    {
        cout << "Bird is flying\n";
    }
};

class Fish : public Animal
{
public:
    void move()
    {
        cout << "Fish is swimming\n";
    }
};

int main()
{
    Animal *a;
    Bird b;
    Fish f;

    a = &b;
    a->move();

    a = &f;
    a->move();

    return 0;
}
// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     virtual void move() = 0;
// };

// class Bird : public Animal
// {
// public:
//     void move() { cout << "Bird is flying\n"; }
// };

// class Fish : public Animal
// {
// public:
//     void move() { cout << "Fish is swimming\n"; }
// };

// int main()
// {
//     Bird b;
//     Fish f;

//     b.move();
//     f.move();

//     return 0;
// }
