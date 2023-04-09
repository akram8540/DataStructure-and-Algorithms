#include<bits/stdc++.h>
using namespace std;

int selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int min = i;

        for(int j=i+1; j <= n-1; j++){
            if(arr[j] < arr[min]){
            min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    return 0;
}
void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {4,1,9,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    cout << "The sorted array is: ";
    printarray(arr, n);

    return 0;
}
