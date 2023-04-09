/*In this question the array is nearly sorted meaning the key to be 
    found may be at ith index or (i+1)th index or (i-1)th index */


#include<iostream>
using namespace std;

//this funtion goes in infinite loop(ig) ==> solve it
// int nearlySorted(int arr[], int n, int key){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (s-e)/2;

//     while(s<=e){
        
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(mid >= s && arr[mid-1] == key){
//             return mid-1;
//         }
//         else if(mid <= e && arr[mid+1] == key){
//             return mid+1;
//         }
//         else if(key > arr[mid]){
//             s = mid +2;
//         }
//         else{
//             e = mid - 2;
//         }
//         mid = s + (s-e)/2;
//     }
//     return -1;
// }


int nearlySorted(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(mid >= s && arr[mid-1] == key){
            return mid-1;
        }
        else if(mid <= e && arr[mid+1] == key){
            return mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
        mid = s + (e-s)/2;

    }
    return 0;
}


int main(){
    int arr[] = {5, 10, 20, 30, 50, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The key is present at:" << nearlySorted(arr,n,50) << endl;

    return 0;



}