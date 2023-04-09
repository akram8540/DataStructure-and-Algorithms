#include<iostream>
using namespace std;

void arrayElementFrequency(int arr[], int n){
    int count = 1;
    int curr = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i] == curr) count++;

        if(arr[i] != curr){
            cout << curr << " - " << count << endl;
            curr = arr[i];
            count = 1; 
        }
    }
    cout << curr << " - " << count << endl;
    
}

int main(){
    
    int arr[] = {40,30, 50, 50, 50};
    int n = sizeof(arr)/ sizeof(arr[0]);

    arrayElementFrequency(arr, n);

    return 0;
}