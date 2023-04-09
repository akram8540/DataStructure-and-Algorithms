// Below written partition function only works if the pivot is choosen as the last element
// if the first is choosen as the pivot traverse the array from the last
// because according to the following function if first element is choosen as the pivot
// no element smaller than the pivot come before the pivot

#include<iostream>
using namespace std;

void partition(int arr[], int low, int high, int pivot){

    int temp[high - low + 1], index = 0;

    for(int i = 0; i <= high; i++){
        if(arr[i] <= arr[pivot]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i = 0; i <= high; i++){
        if(arr[i] > arr[pivot]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
    
}

void print(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {5, 13, 6, 9, 12, 11, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr, n);

    partition(arr, 0, n-1, n-1);
    
    cout << "\nAfter: ";
    print(arr, n);


    return 0;
}