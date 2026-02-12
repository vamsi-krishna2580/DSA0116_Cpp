#include<iostream>
using namespace std;
int main(){
    int n, temp, sum=0;
    cout << "Enter a Number :- ";
    cin >> n;
    temp = n;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    if(temp % sum == 0){
        cout << temp << " - Harshad Number";
    }else{
        cout << temp << " - Not a Harshad Number";
    }
}