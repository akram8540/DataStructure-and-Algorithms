// given a size of rope and three(smaller ropes) values of length to be cut from the larger rope
// calculate the maximum possible number of smaller ropes that we can cut from the larger rope

#include<iostream>
#include<algorithm>

using namespace std;

int  maxPieces(int n, int a, int b, int c){
    
    if(n == 0) return 0;
    if(n < 0) return -1;

    int res = max(max(maxPieces(n-a, a, b, c), maxPieces(n-b, a, b, c)), maxPieces(n-c, a, b, c));

    if(res == -1) return -1;
    
    return res + 1;
}

int main(){

    int n = 5;
    int a=2, b=5, c=1;

    cout <<"Maximum pieces are: " << maxPieces(n, a,b,c);

    return 0;
}