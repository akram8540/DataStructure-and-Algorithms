#include<iostream>
#include<vector>
using namespace std;

vector<int> optimalIntersection(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    vector<int> intersection;

    while(i < m && j < n){
        if(a[i] == b[j]){
            intersection.push_back(a[i]);
            i++;
            j++;
        }
        else
            i++;
    }
    return intersection;

}



int main(){

    int a[] = {1, 2, 2, 3, 3, 4, 5, 6};
    int b[] = { 7, 8, 9};

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    vector<int> ans = optimalIntersection(a, b, n1, n2);

    for(auto it = ans.begin(); it < ans.end(); it++){
        cout << *it << " ";
    }

    return 0;
}