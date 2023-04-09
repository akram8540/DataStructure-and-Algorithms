/*This program does not gives right answer if the pivot lies in later half of subarray*/


/* Second program to find the pivot
    Using the modulo conditon

    This program can also tell how may times a array has been rotated
*/

#include<iostream>
using namespace std;

int getpivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    
    while(s<=e){
        int mid = s + (e-s)/ 2;

        if(arr[mid-1] <= arr[mid] && arr[mid+1] <= arr[mid]){
            return mid;
        }

        if(arr[mid]<=arr[mid-1]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return 0;
}

int main(){
     int arr[] = {8,9,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n << endl;
    cout << "The pivot is at index: " << getpivot(arr, n) << endl;
    
    return 0;
}