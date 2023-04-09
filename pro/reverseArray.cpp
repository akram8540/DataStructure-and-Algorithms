#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){

    for(int i = size-1; i >= 0;  i--){
        
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {5,6,3,8,2};
    int size = 5;

    reverseArray(arr, size);
}