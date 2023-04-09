#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key){
    int start = 0;
    int last = size - 1;
    int ans = -1;
    int mid = start + (last - start)/2;

    while(start<=last){
        if(arr[mid] == key){
            ans = mid;
            last = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            last = mid - 1;
        }
    
    mid = start + (last - start)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int size, int key){
    int start = 0;
    int last = size - 1;
    int ans = -1;
    int mid = start + (last - start)/2;

    while(start<=last){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            last = mid - 1;
        }
    
        mid = start + (last - start)/2;
    }
    return ans;
}

int main(){

    int even[8] = {2, 5, 6, 8, 10, 10, 10, 10};
    
    int a = firstOccurrence(even, 8, 10);
    int b = lastOccurrence(even, 8, 10);

    cout << "The left most occurrence is at index: " << a << endl;
    cout << "The right most occurrence is at index: " << b << endl;

    pair<int,int> x;

    x.first = a;
    x.second = b;

    cout << "occurence at: " << endl;




    return 0;


}