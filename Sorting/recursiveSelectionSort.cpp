#include<iostream>
using namespace std;

void selectioSort(int arr[], int n, int& count){
    // int j;
    // for(int i = 0; i<n-1; i++){
    //     int min = i;
    //     for(j = i+1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }
    //     }
    //     swap(arr[i],arr[min]);
    // }

    while(n==1) return;

    int i = 0;
    int max = i;

    for( ; i < n; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }

    if(max != n-1){
    swap(arr[max], arr[n-1]);
    count ++;
    }

    selectioSort(arr,n-1, count);
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";
}


int main(){
    
    int count = 0;
    int arr[] = {4,1,9,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr,n);

    selectioSort(arr,n,count);

    cout << "\nAfter: ";
    print(arr,n);

    cout << "\nswaps: " << count << endl;
    return 0;
}