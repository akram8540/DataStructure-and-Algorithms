#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin  >> n;

    int i = 1;
        while(i<=sqrt(n)){
            if(pow(2,i)){
                return true;
            }
        }
}