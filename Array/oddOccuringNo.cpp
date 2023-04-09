#include<iostream>
using namespace std;

int oddOccuring(int arr[], int size){
    int count = 0;

    for(int i = 0; i < size; i++){

        for(int j = 0; j<size; j++){
            if(arr[j] == arr[i]){
                count++;
            }
            if(count % 2 != 2){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1,2,3,1,2};
    int size = 5;

    int x = oddOccuring(arr,size);
    cout << "The no is: " << x;
    
    
    return 0;
}