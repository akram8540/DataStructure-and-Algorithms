#include<iostream>
using namespace std;

bool arraySortedOrNot(int arr[], int n){
    
    bool sorted = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            sorted = 0;
        }
    }
    return sorted;
}

int main(){

    int arr[] = {1,2,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Is the array sorted: "<< arraySortedOrNot(arr,n);

    return 0;
}