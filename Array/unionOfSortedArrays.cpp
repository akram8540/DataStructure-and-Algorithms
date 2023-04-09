#include <iostream>
#include <set>
#include <vector>
using namespace std;

/* void naiveUnion(int arr1[], int arr2[], int n1, int n2){
    set<int> st;

    for(int i = 0; i < n1; i++){
        st.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++){
        st.insert(arr2[i]);
    }

    int unionArray[st.size()];
    int i = 0;

    for(auto it: st){
        unionArray[i++] = it;
    }

    cout << "Union of the arrays is: ";
    for(int j = 0; j < st.size(); j++){
        cout << unionArray[j] << " ";
    }
} */

// Sandeep sir's solution
void optimalUnion(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {

        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        if (i > 0 && arr1[i] != arr1[i - 1])
        {
            cout << arr1[i] << " ";
        }
        i++;
    }

    while (j < n2)
    {
        if (j > 0 && arr2[j] != arr2[j - 1])
        {
            cout << arr2[j] << " ";
        }
        j++;
    }
}


// Striver's solution
vector<int> optimal2Union(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    return unionArr;
}

int main()
{

    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // naiveUnion(arr1, arr2, n1, n2);

    // optimalUnion(arr1, arr2, n1, n2);

    vector<int> ans = optimal2Union(arr1, arr2, n1, n2);

    for(int i = 0; i< ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}