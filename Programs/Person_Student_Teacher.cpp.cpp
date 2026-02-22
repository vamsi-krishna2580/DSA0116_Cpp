#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    char gender;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};

class Student : public Person
{
protected:
    int roll;
    int standard;

public:
    void setRoll(int r) { roll = r; }
    int getRoll() { return roll; }
};

class Teacher : public Person
{
protected:
    string subject;
    float salary;

public:
    void setSubject(string s) { subject = s; }
    string getSubject() { return subject; }
};

int main()
{
    Student s;
    s.setName("Vamsi");
    s.setRoll(101);

    Teacher t;
    t.setName("Krishna");
    t.setSubject("Math");

    cout << "Student Name: " << s.getName() << endl;
    cout << "Student Roll: " << s.getRoll() << endl;

    cout << "Teacher Name: " << t.getName() << endl;
    cout << "Teacher Subject: " << t.getSubject() << endl;

    return 0;
}
