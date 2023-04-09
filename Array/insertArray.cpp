#include<iostream>
using namespace std;

int main(){

    int arr[] = {8,3,7,2,5};
    int count = sizeof(arr)/sizeof(arr[0]);

    arr[count+1] = 10;

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
    
}