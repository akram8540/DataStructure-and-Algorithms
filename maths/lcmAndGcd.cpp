// This program returns only gcd
// To calculate lcm = (a*b)/gcd
// To return 2 elements store both the elements in an array or vector and retrun them


#include<iostream>
using namespace std;

int lcmAndGcd(int n, int m){
    int x = min(n,m);
    int gcd = 0;

    for (int i = 2; i <= x; i++)
    {
        if((n%i)==0 && (m%i)==0){
            gcd = i;
        }
    }
    return gcd;

}

int main(){

    int a = 12, b = 64;

    cout << "The number is " << lcmAndGcd(a,b);


  return 0;
}