#include<iostream>
using namespace std;

int main(){
    
    char str[] = "akram khan";
    int n = sizeof(str)/sizeof(str[0]);

    cout << "size: " << n;

    return 0;
}