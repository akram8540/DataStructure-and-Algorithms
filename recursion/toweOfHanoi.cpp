#include<iostream>
using namespace std;

void hanoi(int n, char A, char B, char C){

    if(n == 1){
        cout << "move 1 from " << A << " to " << C << endl;
        return;
    }
    hanoi(n-1, A, C, B);
    cout << "move " << n << " from " << A << " to " << C << endl;
    hanoi(n-1, B, A, C);
}

int main(){

    int x = 5;
    char a = 'A',b = 'B',c = 'C';

    hanoi(x,a,b,c);

    return 0;
}