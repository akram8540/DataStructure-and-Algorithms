#include<iostream>
using namespace std;


// Below implementation is correct it takes O(n) time and O(d) space as an array of size d is created;
// this implementation will fail if  n == d, to overcome use d%n

/* void leftRotate(int arr[], int n, int d){
    d = d%n;
    
    int temp[d];

    for(int i = 0; i<d; i++ ){
        temp[i] = arr[i];
        // cout << " temp = " << temp[i];
    }

    for(int i = 0; i<n-d; i++){
        arr[i] = arr[i+d];
        // cout << " n-d " << n-d;
    }

    for(int i = d+1; i<n; i++){
        arr[i] = temp[i-(d+1)];
        // cout << " arr[i] " << temp[i];
    }

} */


// Better solution:
// Time complexity = o(n), Space complexity = o(1)


void reverse(int arr[], int s, int e){

    
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void leftRotate(int arr[], int n, int d){
    
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);

}


void print(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before: ";
    print(arr,n);

    leftRotate(arr,n,2);

    cout << "\nAfter: ";
    print(arr,n);


    return 0;
}