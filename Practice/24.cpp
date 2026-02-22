#include<iostream>
using namespace std;
int fact(int n){
    if(n == 1 || n == 0)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n, sum=0, temp;
    cin >> n;
    temp = n;
    while(temp>0){
        sum += fact(temp%10);
        temp/=10;
    }
    if(sum == n){
        cout << "Perfect Number";
    }else{
        cout << "Not Perfect Number";
    }
}