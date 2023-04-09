#include<iostream>
using namespace std;

void print(int arr[4][4]){
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
}


void transpose(int arr[4][4]){
    int temp[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            temp[j][i] = arr[i][j];
        }
    }
    // print(arr);
}

// since diagonal is same swap upper annd lower part if the matrix
void efficientTranspose(int arr[4][4]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        
    }
    print(arr);
    
}



int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };

    efficientTranspose(arr);

    return 0;
}