#include<iostream>
#include<math.h>
using namespace std;

bool armstrongNumber(int x){
    int sum = 0;
    int a = x;

    while (a!=0)
    {
        int digit = a%10;
        sum += (digit*digit*digit);
        a /= 10;
    }

    return (sum == x);
    
}

int main(){

    int n = 153;

    cout << "Is armstrong: " << armstrongNumber(n);

    return 0;
}