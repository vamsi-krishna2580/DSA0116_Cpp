#include<iostream>
using namespace std;
int is_prime(int num){
    for (int i=2; i<num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,r;
    cout << "Enter the number :- ";
    cin >> n;
    while(n>0){
        r = n%10;
        if(is_prime(r)){
            cout << r << " - Prime Number\n";
        }
        n /= 10;
    }
    return 0;
}

// perfectsquare, armstrong,