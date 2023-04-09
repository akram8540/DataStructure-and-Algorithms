#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int pivot = 0;

    for(int i = 0; i < n-1; i++){
        
        if(nums[i-1] > nums[i%n]){
            pivot++;
        }
    }
    if(pivot > 1){
        return false;
    }
    
    return true;

        
    }


int main(){

    vector <int> arr{3,4,5,1,2};

    cout << "isSortedAndRotated: "<< check(arr);

    return 0;
}



/* bool check(vector<int>& nums) {
        int n = nums.size();
    int pivot = 0;

    for(int i = 1; i <= n-1; i++){
        
        if(nums[i-1] > nums[i]){
            pivot++;
        }
    }
    if(pivot > 1){
        return false;
    }
    
    return true;

        
    } */