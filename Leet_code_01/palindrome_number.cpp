#include<iostream>
using namespace std;

class palindrome_number
{
private:
        int num;
public:
        palindrome_number(int num){
            this->num = num;
        }
        bool is_palindrome(){
            int temp = num, rev=0;
            while(num>0){
                rev = rev*10 + num%10;
                num/=10;
            }
            num = temp;
            if(rev == num){
                cout<< "true";
                return 0; 
            }
            cout<< "false";
        }
};

int main(){
    int k; 
    cin >> k;
    palindrome_number obj(k);
    obj.is_palindrome();
}