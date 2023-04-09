#include<iostream>
using namespace std;

void reverse(int arr[], int n, int m){
    if(n >= m) return;

    swap(arr[n],arr[m]);
    reverse(arr,n+1,m-1);

}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6}, s = 0, e = 5;

    cout << "Before reverse: ";
    print(arr,6);

    reverse(arr,s,e);

    cout << "\nAfter reverse: ";
    print(arr,6);

    
    return 0;
}