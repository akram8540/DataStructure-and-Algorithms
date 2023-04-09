#include<iostream>
using namespace std;

int main(){
    int arr[] = {8,3,7,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;

    for (int i = k-1; i < n; i++)
    {
        arr[i] = arr[i+1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}