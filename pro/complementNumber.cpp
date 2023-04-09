#include<iostream>
using namespace std;

int main(){
    int n,result;
    cin >> n;

    int mask = 0;
    int temp = n;
    while(temp!=0){
        temp = temp >> 1;
        mask = (mask << 1) | 1;

    }
    n = ~n;
    result = n & mask;

    cout << result;

}