#include<iostream>
using namespace std;

void swap(int & x, int & y){
    int temp = x;
    x = y;
    y = temp;
    
}

int main(){
    int a = 10, b = 15;
    swap(a, b);

    cout << "value of a: " << a << "\nvalue of b: " << b;
    return 0;
}