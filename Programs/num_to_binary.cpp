#include<iostream>
using namespace std;
int main(){
    int k, temp;
    string bin = "";
    cin >> k;
    temp = k;
    while(k>0){
        bin = char('0' + (k%2)) + bin;
        k/=2;
    }   
    cout << bin;
}