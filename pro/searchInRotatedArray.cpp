#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s<e){
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return e;
}

int binarySearch(int arr[], int start, int end, int key){
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;

    }
    return 0;
}

int main(){
    int arr[7] = {7,8,9,1,2,3,4};
    int n = 7;
    int key = 4;
    int piv = pivot(arr,6);
    cout << piv << endl;

    if(key >= arr[piv] && key <= arr[n-1]){
        cout << "The key is present at the index: " << binarySearch(arr, piv, n-1, key);
    }
    else{
        cout << "The key is present at the index: " << binarySearch(arr, 0, piv-1, key);
    }

    return 0;
}