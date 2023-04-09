#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter" << n << "array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The array entered is    : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}