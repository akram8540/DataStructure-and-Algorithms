#include<iostream>
using namespace std;

/* int sumOfAllDivisors(int N){
    int sum = 0;

    for(int i = 1; i<= N; i++){
        for(int j = 1; j<=i; j++){
            if(i%j==0) sum += j;
        }
    }
    return sum;
} */

/* OR we can simply count the number of times a number is occuring and then multiply the count with the number it gives the total sum
Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15
In above example occurrence of: 1 is 4 times
                                2 is 2 times
                                3 is 3 times
                                4 is 4 times
we can calculate this by (N/i) {4/1 = 4, 4/2 = 2} now that we have the number of occurrence multiply it with number i.e (4*1+2*2) to get the sum*/

int sumOfAllDivisors(int N){
    int sum = 0;

    for(int i = 1; i<= N; i++){
            sum += (N/i)*i;
        
    }
    return sum;
}

int main(){
    int n = 5;

    cout << "Sum is: " << sumOfAllDivisors(n);

     return 0;
}