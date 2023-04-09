#include<iostream>
#include<limits.h>
using namespace std;

int maxDifference(int arr[], int n){

    int max = INT_MIN;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if((arr[j]-arr[i]) > max) max = arr[j] - arr[i];
        }
    }
    return max;
}

// efficient solution of this would be to keep track of the minimum element
// while finding the difference between the J'th element and the minimum element

int efficientMaxDifference(int arr[], int n){
    int res = arr[1] - arr[0];
    int mini = arr[0];

    for(int j = 1; j < n; j++){
        res = max(res, arr[j]-mini);
        mini = min(mini, arr[j]);
    }
    return res;
}


int main(){

    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The maximum difference is: " << efficientMaxDifference(arr,n);
    // maxDifference(arr, n);

    return 0;
}