#include<iostream>
using namespace std;

class complex{
    private:
            int real;
            int img;
    public:
            void get(){
                cout << "Enter real number :- ";
                cin >> real;
                cout << "Enter imaginary number :- ";
                cin >> img;
                this->real=real;
                this->img=img;
            }
            void show(){
                cout << real << "+" << img << "i\n";
            }
            void add(complex m, complex n){
                this->real = m.real + n.real;
                this->img = m.img + n.img;
            }
};

int main(){
    complex c1, c2, c3;
    c1.get();
    c1.show();
    c2.get();
    c2.show();
    c3.add(c1, c2);
    c3.show();
}