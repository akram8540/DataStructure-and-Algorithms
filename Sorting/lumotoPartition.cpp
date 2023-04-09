// Lumoto partition is another method 
// In this method, pivot is choosen as the last element
// divide the array in two parts (i, j) such that elements from 0 (low) to i are smaller than the pivot
// and the elements form j to high-1 ((high - 1) because high is the pivot) greater than the pivot 
// then swap arr[high] (pivot) with arr[i+1]
// arr[i+1] is the first element greater than the pivot

#include<iostream>
using namespace std;

void lomutoPartition(int arr[], int low, int high){
    // last element as the pivot
    int pivot = arr[high];
    int i = low - 1;    // i tracks the elemts smaller than the pivot

    // traverse from low to high-1 (because high is the pivot)
    for(int j = low; j <= high - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // swap arr[i+1] with arr[high] as arr[i+1] is the first element greater than the pivot 
    swap(arr[i+1], arr[high]);  
    // return i+1;   // pivotIndex 
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main(){

    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr,n);

    lomutoPartition(arr, 0, n-1);

    cout << "\nAfter: ";
    print(arr,n);

    return 0;
}