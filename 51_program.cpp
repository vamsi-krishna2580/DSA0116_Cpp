#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal makes sound\n";
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Cat says Meow\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog says Bark\n";
    }
};

int main()
{
    Animal *a;
    Cat c;
    Dog d;

    a = &c;
    a->speak();

    a = &d;
    a->speak();

    return 0;
}

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     virtual void speak() = 0;
// };

// class Cat : public Animal
// {
// public:
//     void speak() { cout << "Cat says Meow\n"; }
// };

// class Dog : public Animal
// {
// public:
//     void speak() { cout << "Dog says Bark\n"; }
// };

// int main()
// {
//     Cat c;
//     Dog d;

//     c.speak();
//     d.speak();

//     return 0;
// }
