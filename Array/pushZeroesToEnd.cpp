#include<iostream>
#include<algorithm>
using namespace std;

void pushZeroesToEnd(int arr[], int n){

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            for(int j = i; j<n-1; j++){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1, 2, 0, 0, 3, 0, 5, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr,n);

    pushZeroesToEnd(arr,n);

    cout << "\nAfter: ";
    print(arr,n);

    return 0;
}