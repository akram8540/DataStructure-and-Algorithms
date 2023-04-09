/* print the pattern
    1   
   121
  12321
 1234321 */

 #include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i = 1;
    
    while(i<=n){
         int space = n-i;
        while(space){
            cout << " ";
            space--;
        }
    int j =  1;
    while(j<=i){
        cout << j;
        j++;
    }
    int k = i-1;
    while(k>0){
        cout << k;
        k--;
    }
    int space2 = n-i;
    while(space2){
        cout << " ";
        space2--;
    }
    cout << endl;
    i++;
    }
}   