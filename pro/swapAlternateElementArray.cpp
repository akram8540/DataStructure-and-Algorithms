#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    int start = 0;
    int end = 1;
    int i = 0;
    while(i <= (size+1)/2){
        if(end<size){
        swap(arr[start], arr[end]);
        }
        start = start + 2;
        end = end+2;
        i++;
    }

   for(int i = 0; i<size; i++){
    cout << arr[i] << " ";
   } 
    

}
int main(){
    int arr[6] = {3,5,1,9,11};

    swapAlternate(arr,5);
    
    return 0;
}