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
    int x, y;
    cout << "Enter the x :- ";
    cin >> x;
    cout << "Enter the y :- ";
    cin >> y;
    for (int i=x; i<y; i++){
        if(is_prime(i)){
            cout << i << endl;
        }
    }
    return 0;
}