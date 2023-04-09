// left rotate an array by one place
// {1, 2, 3, 4, 5} ---> {2, 3, 4, 5, 1}

#include<iostream>
using namespace std;

void leftRotateArray(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        // int x = i;
        swap(arr[i], arr[i+1]);
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {30, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr,n);

    leftRotateArray(arr,n);

    cout << "\nAfter: ";
    print(arr,n);


    return 0;
}