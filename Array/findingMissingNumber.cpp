#include<iostream>
using namespace std;

int bruteMissingNumber(int a[], int N) {
    
    for(int i = 1; i <= N; i++){
        int flag = 0;
        for(int j = 0; j < N; j++){
            if(a[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }
    
}

int betterMissingNumber(int a[], int N){
    int hash[N+1] = {0};
    int j;

    for(int i = 0; i < N-1; i++){
        hash[a[i]]++;
    }
    for(j = 1; j <=N; j++){
        if(hash[j] == 0){
            break;
        }
    }
    return j;
}

int optimalMissingNumber(int a[], int N){

    int xor1 = 0, xor2 = 0;

    for(int i = 0; i < N-1; i++){ // n-1 because size of the array is N-1
        xor1 = xor1 ^ (i+1);
        xor2 = xor2 ^ a[i];
    }
    xor1 = xor1 ^ N;
    return (xor1 ^ xor2);
}

int optimal2MissingNumber(int a[], int N){

    int sum = (N*(N+1))/2;
    int s = 0;
    for(int i = 0; i < N-1; i++){
        s += a[i];
    }
    return sum-s;
}



int main(){

    int arr[] ={1, 2, 3};

    int k = optimalMissingNumber(arr, 4);
    cout << "Missing Number is: " << k;

    return 0;
}