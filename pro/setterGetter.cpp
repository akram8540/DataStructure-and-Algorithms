#include<iostream>
using namespace std;

int g = 10;

void setter(int x){
    g = x;
}

int getter(){
    return g;
}

int main(){
    cout << getter();
}

