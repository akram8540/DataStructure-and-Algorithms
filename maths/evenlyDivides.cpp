/* Given a number N. Count the number of digits in N which evenly divides N.
Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.*/


#include<iostream>
using namespace std;

int evenlyDivides(int n){
    int count = 0;
    int x = n;

    while(n>0){
        int rem = n%10;

        if(rem!= 0 && x % rem == 0) count++;

        n /= 10;
    }
    return count;
}



int main(){
    int x = 22074;
    cout << "The number of digits that divides are: " << evenlyDivides(x);

    return 0;
}