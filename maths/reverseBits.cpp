#include<bits/stdc++.h>
using namespace std;


long long reverseBits(long long X){
    int pos = 31;    //since number starts from 2 to the power 0
    long long temp = 0;

    while(X > 0){
        int digit = X&1; // AND operation of a number with 1 gives last bit of the number

        if(digit == 1){
            temp += pow(2, pos);
        }
        pos--;
        X >>=  1;

    }
    return temp;
}

int main(){
    long long X = 1283;
    cout << "The reverse number is: "<< reverseBits(X);

    return 0;
}