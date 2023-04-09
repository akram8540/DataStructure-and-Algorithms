#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        for(int j = n-i; j>0; j--){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";         //k;
        }
        for(int l = 1; l < i; l++){
            cout << "*";         //i-l;
        }
        for(int j = n-i-1; j>0; j--){
            cout << " ";
        }
        cout << endl;
    }

}
