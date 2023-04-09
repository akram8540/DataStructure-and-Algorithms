#include<iostream>
using namespace std;

int sumArray(int arr[], int x){

    int result = 0;
    for(int i = 0; i < x; i++){
        result = arr[i]+ result;
    }
    return result;
}


int main(){
    int arr[5] = {5,3,6,1,9};
    cout <<"The sum of the array is: "<< sumArray(arr, 5) << endl;
}