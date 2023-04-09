#include<iostream>
using namespace std;

int trapRain(int arr[], int n){
    int minval = min(arr[0], arr[n-1]);
    int res = 0;

    for(int i = 1; i<n-1; i++){
        int temp = minval - arr[i];

        if(temp < 0) continue;

        else res += temp;
    }
    return res;
}

int main(){

    int arr[] = {8, 8, 2, 4, 5, 5,  1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The amount trapped: " << trapRain(arr, n);
    return 0;
}