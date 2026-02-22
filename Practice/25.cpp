#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cin >> n;
    while(true){
        int r = n%10;
        sum += r*r;
        n/=10;
        if(sum <= 9 && n<1){
            if(sum == 1){
            cout << "Happy Number";
            break;
            }
            else{
                cout << "Not Happy Number";
                break;
            }
        }
        else if(n<1){
            n = sum;
            sum = 0;
        }
    }
}