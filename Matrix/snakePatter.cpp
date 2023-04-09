// print the matrix in snake pattern
// for ex:  {{1,2,3,4},
//           {5,6,7,8},
//           {9,10,11,12},
//           {13,14,15,16}}
// snake pattern = 1,2,3,4,8,7,6,5,9,10,11,12,16,15,14,13

#include<iostream>
using namespace std;


void print(int arr[4][4]){
    
    int k = 0;
    for(int i = 0; i < 4; i++){
        
            if(i%2 == 0){
                for(int j = 0; j < 4;j++ ){
                cout << arr[i][j] << " ";
                
            }
            }
            else{
                for(int j = 3; j >=0; j-- ){
                cout << arr[i][j] << " ";
               
            }
            }
    }
}


int main(){
    
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };

    print(arr);

    return 0;
}