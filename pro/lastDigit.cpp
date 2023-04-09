#include<iostream>
using namespace std;

int main(){
    int a,x;

    cin >> a;
    x = abs(a)%10;

    cout << "last digit is: " << x;

    return 0;
}