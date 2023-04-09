#include<iostream>
// #include<algorithm>

using namespace std;

void bubble(int arr[], int size){

    for(int i = 0; i < size-1; i++){

        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
}

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

int main()
{
    int x[] = {5, 1, 4, 2, 8};
    int size = sizeof(x)/sizeof(x[0]);

    cout << "Before swap :"; 
    print(x,size);

    bubble(x,size);

    cout << "\nAfter swap :"; 
    print(x,size);

    return 0;
}
