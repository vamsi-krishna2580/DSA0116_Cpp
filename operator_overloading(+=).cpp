#include<iostream>
using namespace std;
class Number{
    private :
            int i;
    public :
            Number(int i){
                this->i = i;
            }
            Number operator +=(Number n){
                i += n.i;
                return *this;
            }
            int display(){
               return this->i; 
            }

};

int main(){
    Number n1(1), n2(2);
    cout << "N1 :- "<<n1.display() << endl;
    n1+=n2;
    cout << "N1 :- "<<n1.display();
    return 0;
}