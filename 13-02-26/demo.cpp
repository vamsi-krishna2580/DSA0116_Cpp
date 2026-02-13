#include<iostream>
using namespace std;

class student{
    public:
    int reg;
    string name;
    void disp(){
        cout <<reg <<endl;
        cout <<name <<endl;
    }
};

int main(){
    student s, *p;
    p =&s;
    (*p).name = "vamsi";
    (*p).reg = 121;
    (*p).disp();
}

