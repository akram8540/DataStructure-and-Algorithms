#include<iostream>
using namespace std;

int binary(int arr[], int key, int low, int high){

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 6};
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int low = 0;
    int high = 9;

    int result = binary(arr,key,low,high);

    cout << "The element is found at index: "<< result << endl;

    return 0;
}