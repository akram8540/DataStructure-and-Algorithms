/*  same as the fooor of a room

    Return the imediate left element of the key even if it is not present
    for example in array {2,3,4,7,8,12,15,22} 
    if we are given the number 19 return 15 as it would be immediate left to 19 if present
    but if given 15 return 15 as it is present in the array
*/


#include<iostream>
using namespace std;

int floorOfnumber(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int result = 0;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid] == key){
            return arr[mid];
        }
        else if(key > arr[mid]){
            result = arr[mid];
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return result;
}

int main(){
    int arr[] = {2,3,4,7,8,12,15,22};
    //int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The floor of the number is: " << floorOfnumber(arr,8,21);

    return 0;
}