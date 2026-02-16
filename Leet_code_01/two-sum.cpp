#include<iostream>
using namespace std;
class calc{
    private:
            int *arr, n;
    public:  
            calc(int arr[], int n){
                this->n = n;
                this->arr = new int[n];
                for (int i=0; i<n; i++){
                    this->arr[i] = arr[i];
                }
            }
            void two_sum(int n){
                for(int i=0; i<this->n; i++){
                    for(int j=0; j<this->n && j!=i; j++){
                        if (arr[i] + arr[j] == n){
                            cout << "[" << i << ", " << j << "]" << endl; 
                        }
                    }
                }
            }
};
int main(){
    int arr[4] = {2, 7, 11, 15}, k; 
    cin >> k;
    int n = sizeof(arr)/sizeof(arr[0]);
    calc obj(arr, n);
    obj.two_sum(k);
}