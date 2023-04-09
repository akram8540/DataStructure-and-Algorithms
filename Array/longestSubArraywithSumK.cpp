#include<iostream>
#include<vector>
#include<map>
using namespace std;

int longestSubArrayWithSumK(vector<int> arr, long long k){
    map<long long, int> mpp;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum == k) maxLen = max(maxLen, i+1);

        long long rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }

        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    return maxLen;
}



int main(){
    vector<int> arr = {-13, 0 ,6 ,15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};

    cout << "max len: " << longestSubArrayWithSumK(arr, 15);


    return 0;
}