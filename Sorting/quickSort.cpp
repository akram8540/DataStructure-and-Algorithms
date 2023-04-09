// The partion method used in this is Hoare's partition

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){

        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && i > low){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;

}

void quickSort(int arr[], int low, int high){

    if( low < high){
        int partionIndex = partition(arr, low, high);
        quickSort(arr, low, partionIndex - 1);
        quickSort(arr, partionIndex + 1, high);
    }
}

void print(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main(){

    int arr [] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr, n);

    quickSort(arr, 0, n-1);

    cout << "\nAfter: ";
    print(arr, n);


    return 0;
}