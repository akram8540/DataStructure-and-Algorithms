#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int k){

    for(int i = k; i<k+n-2; i++){
        swap(arr[(i+k)%n],arr[i%n]); 
    }
}

int main(){

    int arr[] = {10,20,30,40,50};
    rotateArray(arr,5,2);
    cout << "rotated = ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}