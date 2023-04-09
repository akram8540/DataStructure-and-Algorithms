// An array is given, and a target is given we have to find the 2 elements lets say a & b in the array
// such that a + b = target;
// there are two types of this problem
//      type 1:- if the elements exist return true else return false
//      type 2:- if the elements exist return the indices of the elements

#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
using namespace std;

vector<int> bruteTwoSum(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] + arr[i] == target)
                return {i, j};
        }
    }
}

// this soltion is optimal if are returning the indices;
// this is better solution if we have to return true/false
vector<int> betterTwoSum(int arr[], int n, int target){
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        int num = arr[i];
        int rem = target - num;
        if(mpp.find(rem) != mpp.end()){
            return {mpp[rem], i};
        }
        mpp[num] = i;
    }
    return {-1,-1};
}


// this works only if we have to return ture/false
// in order to return indices we need to store original array element with their indices as pair
// in another data structue like {(2,0),(6,1),(5,2).....} and then sort and return indices
// hence this approach for type 2 will have more time complexity.

bool optimalTwoSum(int arr[], int n, int target){
    int left = 0, right = n-1;

    sort(arr,arr+n);

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target) return true;

        else if(sum < target) left ++;
        else right--;
    }
    return false;
}

int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = betterTwoSum(arr, n, 14);

    // for(auto it: ans) cout << it << " ";  
    for (auto it = ans.begin(); it < ans.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}