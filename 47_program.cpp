#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name, species;
    int age;

public:
    void setSpecies(string s) { species = s; }
    string getSpecies() { return species; }
};

class Cat : public Animal
{
protected:
    string color, breed;

public:
    void setColor(string c) { color = c; }
    string getColor() { return color; }
};

class Dog : public Animal
{
protected:
    float weight;
    string breed;

public:
    void setWeight(float w) { weight = w; }
    float getWeight() { return weight; }
};

int main()
{
    Cat c;
    c.setSpecies("Mammal");
    c.setColor("Black");

    Dog d;
    d.setSpecies("Husky");
    d.setWeight(20.5);

    cout << "Cat Species: " << c.getSpecies() << endl;
    cout << "Cat Color: " << c.getColor() << endl;

    cout << "Dog Species: " << d.getSpecies() << endl;
    cout << "Dog Weight: " << d.getWeight() << endl;

    return 0;
}
