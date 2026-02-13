#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int id;
    float salary;

public:
    void setId(int i) { id = i; }
    int getId() { return id; }
};

class Manager : public Employee
{
protected:
    string department;
    float bonus;

public:
    void setDepartment(string d) { department = d; }
    string getDepartment() { return department; }
};

class Engineer : public Employee
{
protected:
    string specialty;
    int hours;

public:
    void setSpecialty(string s) { specialty = s; }
    string getSpecialty() { return specialty; }
};

int main()
{
    Manager m;
    m.setId(1);
    m.setDepartment("HR");

    Engineer e;
    e.setId(2);
    e.setSpecialty("Software");

    cout << "Manager ID: " << m.getId() << endl;
    cout << "Manager Dept: " << m.getDepartment() << endl;

    cout << "Engineer ID: " << e.getId() << endl;
    cout << "Engineer Specialty: " << e.getSpecialty() << endl;

    return 0;
}
