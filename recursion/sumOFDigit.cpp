#include<iostream>
using namespace std;

// int sum(int n, int add = 0){
//     if(n == 0) return add;

//     add = add + (n%10);    

//     return sum(n/10, add);

//     // return add;
// }

int sum(int n){
    if(n==0) return 0;

    return sum(n/10) + n%10;
}


int main(){

    int x = 9987;

    cout <<"Sum = " << sum(x);

    return 0;
}