#include<iostream>
#include<vector>
using namespace std;


void merge(int arr[], int low,int mid, int high){
    
    vector<int> temp;
    int left = low;
    int right = mid +1;

    while(left <= mid && right <= high){

        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i = low; i < high; i++){
            arr[i] = temp[i-low];
        }
}

void mergeSort(int arr[], int low, int high){

    if(low>=high) return;

    int mid = (low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {3,1,2,4,1,5,2,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before Sorting ";
    print(arr,n);

    mergeSort(arr,0,n);

    cout << "\nAfter Sorting ";
    print(arr,n);



    return 0;
}