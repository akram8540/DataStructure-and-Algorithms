#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n){
    int ans = arr[0];

    for(int i = 1; i < n; i++ ){
        if(arr[i] > ans){
            ans = arr[i];
        }
        
    }
    return ans;
}

int main(){

    int arr[] = {1 ,99, 1000, 121, 2, 2, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The largest number is: "<< findLargest(arr,n);

    return 0;
}