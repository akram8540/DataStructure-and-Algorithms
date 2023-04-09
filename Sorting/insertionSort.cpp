#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i = 1; i<n; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0){
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = key;
    }
}



void print(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr, n);

    insertionSort(arr, n);

    cout << "\nAfter : ";
    print(arr,n);

    return 0;


}