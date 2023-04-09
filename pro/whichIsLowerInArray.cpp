#include<iostream>
using namespace std;

void lower(int arr[], int n){

    for(int i = 1; i<n; i++){
        int count = 0;
        for(int  j = 0; j<i; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
        cout << "The element " << arr[i] << " is greater than " << count << " numbers" << endl;
    }
}


int main(){
    int arr[] = {4,8,2,6,8,5,11};
    int n  = sizeof(arr)/sizeof(arr[0]);

    lower(arr,n);

    return 0;
}