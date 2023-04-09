/* print the pattern
        1234554321
        1234**4321
        123****321
        12******21
        1********1   */


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=(n-i+1)){
            cout << j;
            j++;
        }
        int star1 = 2*i-2;
        while(star1){
            cout << "*";
            star1--;
        }
        int no = n-i+1;
        while(no){
            cout << no;
            no--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
