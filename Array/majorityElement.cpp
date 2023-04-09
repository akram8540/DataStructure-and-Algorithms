// Given an array A of N elements. 
// Find the majority element in the array. 
// A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include<iostream>
#include<map>
using namespace std;

int naiveMajorityElement(int arr[], int n){
    
    int maxi = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]) count++;
        }
        maxi = max(count, maxi);
    }
    if(maxi > n/2) return maxi;
    else return -1;
}

int betterMajorityElement(int arr[], int n){
    map<int,int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second > n/2) return it.first;
    }
    return -1;
}

int optimalMajorityElement(int arr[], int n){

    
}


int main(){
    int arr[] = {3,1,3,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The majority element is: " << naiveMajorityElement(arr,n) <<endl;
    cout << "The majority element is: " << betterMajorityElement(arr,n) << endl;



    return 0;
}