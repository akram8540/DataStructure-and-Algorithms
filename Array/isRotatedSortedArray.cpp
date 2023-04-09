
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums ){
    int pivot = -1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i-1]) {
            pivot = i;
            break;
        }
    }

    if (pivot == -1) {
        return true;
    }

    for (int i = pivot; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i+1]) {
            return false;
        }
    }
    for (int i = 0; i < pivot; i++) {
        if (nums[i] > nums[i+1]) {
            return false;
        }
    }

    return true;
}

int main(){
    vector<int> arr{3,4,5,1,2};

    cout << "isRotetedArray: " << check(arr) << endl;
    return 0;
}