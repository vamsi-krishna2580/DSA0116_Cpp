#include<iostream>
using namespace std;
int main(){
    int rows;
    int cols;
    cout << "Enter number of rows :- ";
    cin >> rows;
    cout << "Enter number of cols :- ";
    cin >> cols;

    int **arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
    }
    cout << "Enter " << rows*cols <<" elements :- \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Array elements are :- \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}