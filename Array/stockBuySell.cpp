#include<iostream>
using namespace std;

int stockBuySell(int arr[], int n){
    int minval = 0;
    int maxval = 0;

    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1] && arr[i] <= minval) minval = arr[i];

        

    }
}

int main(){


    return 0;
}