#include<iostream>
using namespace std;
int main(){
    int rows = 3, cols = 3;
    int arr[rows][cols] = {1,3,2,8,9,4,7,6,5};
    int x1,y1,x2;
    for(int i=0; i<rows; i++){
        int max = 0;
        for(int j=0; j<cols; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                x1 = i;
                y1 = j;
            }
        }
        for(int k=0; k<rows; k++){
            int min = 100;
            if(min > arr[k][y1]){
                min = arr[k][y1];
                    x2 = k;
            }
        }
        if (x1 == x2){
            break;
        }
    }
    cout << arr[x1][y1] << endl;
    cout << "Index: " << x1 << " " <<y1 ;

}