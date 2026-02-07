#include<iostream>
using namespace std;
class average{
    public:
            float get_avg(int a, int b, int c){
                return (a+b+c)/3.0;
            }
};

int main(){
    int a, b, c;
    cout <<"Enter the a, b, c Values\n";
    cin >> a >> b >> c;
    average obj;
    cout << "Average of numbers :- " << obj.get_avg(a, b, c);
}