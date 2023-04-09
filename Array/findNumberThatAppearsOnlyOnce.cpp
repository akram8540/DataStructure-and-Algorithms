// Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice
//  except for one number which will occur only once. Find the number occurring only once.

// In another question the array might not be sorted

#include<iostream>
using namespace std;

int searchSingleElement(int arr[], int n){
    int s = 0; 
    int e = n-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
            return arr[mid];
        }
        
    }
    return -1;
}


int main(){

    int arr[] = {1,1,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The single element is: " << searchSingleElement(arr, n);

    return 0;
}