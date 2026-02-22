#include<iostream>
using namespace std;

int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    int sum = 0;
    string n;
    cin >> n;

    int len = n.length();

    for(int i = 0; i < len; i++){
        int digit = n[i] - '0';
        int val = power(digit, len);   // ✅ no floating error
        sum += val;

        cout << val << endl;
        cout << sum << endl;
    }

    if(sum == stoi(n)){
        cout << "Armstrong Number";
    } else {
        cout << "Not Armstrong Number";
    }

    return 0;
}