#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,3,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr1 [10] = {0};

    for(int i = 0; i< n; i++){
        arr1[arr[i]]++;
    }

    cout << "The hash table: " << endl;
    for(int i = 0; i< 10; i++){
        cout << arr1[i] << " ";
    }


    return 0;
}