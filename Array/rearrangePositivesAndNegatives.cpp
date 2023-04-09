// An array is given with equal number of positives and negatives
// we have to arrange in such a way that positives and negatives appear at alternation positions
// the rearranged array begins with postive element
// order of the orginal array is preserved

#include <iostream>
using namespace std;

void bruteRearrangeArray(int arr[], int n)
{
    
    int pos[n / 2 + 1], neg[n / 2 + 1];
    int i = 0, j = 0;

    for (int k = 0; k < n; k++)
    {
        if (arr[k] < 0)
        {
            neg[j] = arr[k];
            j++;
        }
        else
        {
            pos[i] = arr[k];
            i++;
        }
    }
    for (int k = 0; k < n / 2; k++)
    {
        arr[k * 2] = pos[k];
        arr[(2 * k) + 1] = neg[k];
    }
}

void print(int arr[], int n){
    for(int i = 0; i< n; i++) cout << arr[i] << " ";
}

int main()
{
    int arr[] = {3,1,-2,-5,2,-4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before:" << endl;
    print(arr, n);

    bruteRearrangeArray(arr, n);

    cout << "\nAfter:" ;
    print(arr, n);


    return 0;
}