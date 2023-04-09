#include<iostream>
using namespace std;

int main(){
    int i, a;
    cin >> a;
    for (i = 1; i <= a; i++){
        for( int j = 1; j < i; j++){
            cout << i;
        }
        cout << i << "\n";
    }
}