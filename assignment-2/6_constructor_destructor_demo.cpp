#include <iostream>
using namespace std;

class Demo {
    private:
    int n;
public:
    Demo(int n) { 
        this->n = n;
        cout <<n<< "Constructor Called" << endl;
        
     }
    ~Demo() { cout <<n<< "Destructor Called" << endl; }
};

int main() {
    Demo d1(1);
    {
        Demo d2(2);
    }
    Demo d3(3);
    return 0;
}
