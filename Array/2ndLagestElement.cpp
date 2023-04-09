#include<bits/stdc++.h>
using namespace std;

int find2Largest(int arr[], int n){

    if(n==1){
        return -1;
    }
    int ans = INT_MIN;
    int ans2 = INT_MIN;

    for(int i = 0; i < n; i++ ){
        if(arr[i] > ans){
            ans = arr[i];
        }
        // THIS also works
        // else if(arr[i] > ans2 && arr[i] != ans){
        //     ans2 = arr[i];
        // }
        
    }
    
    for(int i = 0; i < n; i++ ){
        if(arr[i] > ans2 && arr[i] != ans){
            ans2 = arr[i];
        }
        
    }
    if(ans2==INT_MIN){
            return -1;
        }

    return ans2;
}


int main(){

    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The second largest number is: "<< find2Largest(arr,n);

    return 0;
}