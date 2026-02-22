#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    char Gender;
    public:
        void set(string name, int age, char Gender){
            this->name = name;
            this->age = age;
            this->Gender = Gender;
        }
        void get(){
            cout << "Name: " <<name <<endl;
        }
};
class Student :public Person{
    int rollno;
    char standard;
    public:
    void set(int rollno, char standard){
        this->rollno = rollno;
        this->standard = standard;
    }
};
class Teacher :public Person{
    string Subject;
    float salary;
    public:
    void set(float salary, string Subject){
        this->salary = salary;
        this->Subject = Subject;
    }
};