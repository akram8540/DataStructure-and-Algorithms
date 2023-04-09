#include <iostream>

using namespace std;

int main()
{
    int n, remain, i= 1;
    char hex[10];
    cin >> n;
    int temp = n;
    
    while(temp!=0){
        remain = temp % 16;
        if(remain < 10){
            hex[i++] = remain + 48;
        }
        else{
            hex[i++] = remain + 55;
        }
        
        temp = temp/16;
        
    }
    
    for(int j = i; j > 0; j--){
        cout<< hex[j];
    }

    return 0;
}