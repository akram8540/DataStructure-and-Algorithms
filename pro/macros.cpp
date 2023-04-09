#include<iostream>
using namespace std;
#define PRODUCT(a,b) a*b;
int main(){
    int x, y, t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        cout << PRODUCT(x, y);
        cout << "\n";
    }

}