#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout << "Enter a Number :- ";
    int n;
    cin >> n;
    float res = pow(n, 0.5);
    int inte = (int)res;
    if(res-inte == 0){
        cout << n << " - Perfect Square";
    }
    else{
        cout << n <<" - Not a Perfect Square"; 
    }
    return 0;
}