#include<cmath>
#include<iostream>
using namespace std;

int main(){
    int n, temp, r, i=0;
    float sum = 0;
    cout << "Enter a Number :- ";
    cin >> n;
    temp = n;
    while(n>0){
        i++;
        n/=10;
    }
    n = temp;
    while(n>0){
        r = n%10 ;
        sum += (float)pow(r, i) ;
        n /= 10;
    }
    if(sum == temp){
        cout << temp << " - Armstrong Number";
    }
    else{
        cout << temp <<" - Not a Armstrong Number";
    }
    return 0;
}