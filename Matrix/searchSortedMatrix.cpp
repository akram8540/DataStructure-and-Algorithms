// the given matrix is sorted in row-wise and cloumn-wise way
// meaning the row and column both are sorted in increasing or decreasing order


#include<iostream>
#include<vector>
using namespace std;

// vector<int> matrixSearch(int arr[4][4], int key){
//     vector<int> ans(2);
//     int i = 0, j = 3;

//     while(i < 4 && j >= 0){
//         if(arr[i][j] == key) {
//             ans[0] = i;
//             ans[1] = j;
//             break;
//         }
//         else if(arr[i][j] < key){
//             i++;
//         }
//         else j--;
//     }
//     return ans;
// }



int main(){

    int arr[4][4] = {{1,2,3,4},
                    {5,6,0,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };

    // vector<int> ans = matrixSearch(arr, 10);

    // for(auto it : ans) cout << it << " ";
    int i, j;
    bool found = false;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(arr[i][j] == 0) {
                found = true;
                break;
            }
        }
        if(found) break;
    }
    cout << i << " " << j;

    return 0;
}