// sum of digits of a number until single digit
#include<iostream>
using namespace std ;

int main(){
    int n, sum=0, state = 1;
    cout << "Enter a number :- ";
    cin >> n;
    while(state){
        sum += n%10;
        n/=10;
        if(n<1 && sum<=9){
            state = 0;
            cout << sum;
            break;
        }
        else if(n<1 && sum > 9){
            state = 1;
            n = sum;
            sum = 0;
        }
        
    }
    return 0;
}