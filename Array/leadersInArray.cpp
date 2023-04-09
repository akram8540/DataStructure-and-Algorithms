#include<iostream>
using namespace std;

void leadersInArray(int arr[], int n){
    bool flag;
    for(int i = 0; i<n-1; i++){
        int leader = arr[i];
        if(arr[i+1] < leader){
            flag = 1;
            for(int j = i+1; j < n; j++){
                if(arr[j] >= leader){
                    flag = 0;
                    break;
                }
            }
        }
        // cout << "flag: " << flag;
        if(flag == 1){
            cout << leader << " ";
        }
        // cout << " i = " << i <<endl;
    }
    cout << arr[n-1];
}


int main(){

    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = sizeof(arr)/ sizeof(arr[0]);

    leadersInArray(arr, n);


    return 0;
}