#include<iostream>
using namespace std;

int main(){
    int a, x, sum = 0;
    cin >> a;

    x = a%10;
    sum += x;
    a = a/10;
    
    x = a%10;
    sum += x;
    a = a/10;
    
    x = a%10;
    sum += x;

    cout << "sum of digits is: " << sum;
}