#include<iostream>
using namespace std;
int count = 0;
void bubbleSort(int arr[], int n){

    if(n==1) return;
    count++;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i+1], arr[i]);
        }
    }
    bubbleSort(arr, n-1);
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[] = {2,3,56,23,43,21,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Before Sorting: ";
    print(arr,n);

    bubbleSort(arr, n);

    cout << "\nAfter Sorting: ";
    print(arr,n);

    cout<< "\ncount: " << count;
    return 0;
}