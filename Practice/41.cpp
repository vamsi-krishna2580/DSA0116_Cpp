#include<iostream>
using namespace std;
int find_max_min(int arr[], int n, int *max, int *min){
    *max = arr[0], *min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
    return 0;
}
int main(){
    int arr[] = {10,12,41,25,13,74,89,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max, min;
    find_max_min(arr, n, &max, &min);
    cout << "Max: " << max << endl;
    cout << "Min:  "<< min;

}