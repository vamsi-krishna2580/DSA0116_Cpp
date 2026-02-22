#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a number :- ";
    cin >> n;
    for(int i=1; i<n ;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " - Perfect Number";
    }else{
        cout << n << " - Not a Perfect Number";
    }
}

// primr from 100 to 200
// sum of 