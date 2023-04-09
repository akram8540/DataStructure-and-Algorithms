// print the boundary elements of the matrix
// for ex:  {{1,2,3,4},
//           {5,6,7,8},
//           {9,10,11,12},
//           {13,14,15,16}}
// snake pattern = 1,2,3,4,8,12,16,15,14,13,9,5

#include<iostream>
using namespace std;


void printBoundary(int arr[4][4]){
    
    for(int i = 0; i < 2+((4-2)*2); i++){
        if(i == 0){
            for(int j = 0; j < 4; j++){
                cout << arr[i][j] << " ";
            }
        }
        else if(i == 3) {
            for(int j = 3; j>=0; j--){
                cout << arr[i][j] << " ";
            }
        }
        else if(i < 3 && i != 0){
            cout << arr[i][3] << " ";
        }
        else if(i > 3){
            cout << arr[i][0]<< " ";
        }
    }
}


int main(){
    
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };

    printBoundary(arr);

    return 0;
}