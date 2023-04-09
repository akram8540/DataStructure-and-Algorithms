#include<iostream>
using namespace std;

void countSort012(int arr[], int n){

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }

    // cout << cnt0 << " " << cnt1 << " " << cnt2 << endl;
    for(int i = 0; i < cnt0; i++){
        arr[i] = 0;
    }
    for(int i = cnt0; i < cnt0 + cnt2; i++){
        arr[i] = 1;
    }
    for(int i = cnt0 + cnt1; i < n; i++){
        arr[i] = 2;
    }
}

void sort012(int arr[], int n){
    int low = 0, mid = 0, high = n-1;

    for(int i = 0; i < n; i++){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1) mid++;

        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}



int main(){
    int arr[] = {0, 1, 0, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr, n);

    // countSort012(arr, n);

    sort012(arr, n);

    cout << "\nAfter: ";
    print(arr, n);

    return 0;
}