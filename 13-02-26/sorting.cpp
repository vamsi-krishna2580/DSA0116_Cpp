#include<iostream>
using namespace std;
int main(){
    int arr[] = {74,56,84,2,10,45,69};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *p;
    p = arr;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(*(p+j) > *(p+j+1)){
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }

        }
    }
    for(int i=0; i<n; i++){
        cout << *(p+i) << endl;
    }
}