#include <iostream>
using namespace std;
class year{
    public:
            int is_leap(int y){
                if ((y%4 == 0 && y%100 !=0) || (y%400 == 0)){
                    return 1;
                }
                return 0;
            }
};
int main(){
    int y;
    cout << "Enter the year :- \n";
    cin >> y;
    year obj;
    if (obj.is_leap(y)){
        cout << y <<" - Leap year";
    }
    else{
        cout << y <<" - Not a Leap year";
    }
}