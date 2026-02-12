#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
public:
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() const {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main() {
    Student s(101, "Rahul");
    s.display();
    return 0;
}
