#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(int arr[], int n){
    int count = 0;
    if(n == 0) return 0;

    else{
    for(int i = 1; i<n-1; i++){
        if(arr[i] != arr[count]){
            count++;
            swap(arr[i],arr[count]);
        }
    }
    return count+1;
    }
}

void print(int arr[], int n){
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {1,1};
    int n =  sizeof(arr)/sizeof(arr[0]);


    cout << "Array ";
    print(arr,n);
    
    cout << "\nDistincts are: ";
    print(arr,removeDuplicate(arr,n));

    return 0;
}
