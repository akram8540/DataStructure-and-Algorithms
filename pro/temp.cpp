#include<iostream>
using namespace std;

int main(){
    float c, f;

    cout << "enter fahrenheit: ";
    cin >> f;

    c = (f - 32.0)*(5.0/9.0);

    cout << "celcius = " << c;

    return 0;
}