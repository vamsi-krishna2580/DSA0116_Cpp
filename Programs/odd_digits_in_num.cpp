#include<iostream>
using namespace std;
void check(int r){
    if (r%2 == 0){
    cout << r <<" - Even Number\n";
    return;
    }
    cout << r <<" - Odd Number\n";

}

int main(){
    int n,r;
    cout <<"Enter the number\n";
    cin >> n;
    while(n>0){
        r = n%10 ;
        check(r);
        n /= 10;
    }
    return 0;
}