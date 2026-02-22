#include<iostream>
using namespace std;
class Matrix
{
    private: 
            int a[3][3], i, j;
    public:
            void get()
            {
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        cin >> a[i][j];
                    }
                }
            }
            void disp()
            {
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        cout << a[i][j] << "\t";
                    }
                    cout << endl;
                }
            }
            Matrix operator + (Matrix k){
                Matrix temp;
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        temp.a[i][j] = a[i][j] + k.a[i][j];
                    }
                }
                return temp;
            }
};
int main(){
    Matrix m1, m2, m3;
    m1.get();
    m2.get();
    cout << "M1 Matrix\n";
    m1.disp();
    cout << "M2 Matrix"  << endl;
    m2.disp();
    cout << endl;
    m3 = m1+m2;
    cout << "M3 Matrix\n";
    m3.disp();
    return 0;
}
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18