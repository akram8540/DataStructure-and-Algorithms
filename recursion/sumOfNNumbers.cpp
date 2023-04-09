#include<iostream>
using namespace std;

int sum = 0;

// Passing numbers as paramerter
/* void sumNNumber(int i, int n){
    if (i>n)
    {
        cout << sum << " ";
        return;
    }
    sum = sum + i;
    sumNNumber(++i,n);
    
} */

// Passing sum as parameter
/* void sumNNumber(int n, int sum){

    if(n<1){
        cout << sum;
        return;
    }

    // sum += n;
    // n -= 1;
    sumNNumber(n-1,sum+n);

    
} */

// Above 2 function are example of parametarized recursion in which we pass parameters.
// It can be done using just function calls also
// OR this can be used to return a value instead of printing it

int sumNNumber(int n){

    if(n == 0){
        return 0;
    }

    return (n + sumNNumber(n-1));
    
}


int main(){

    int n;
    cout << "Enter number: ";
    cin >> n;


    cout << sumNNumber(n);


     return 0;
}