// Correct.

// 2815. Max Pair Sum in an Array
// https://leetcode.com/problems/max-pair-sum-in-an-array/description/

















#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

int maxDigit(int n){
    vector<int> digit;
    while(n > 0){
        digit.push_back(n % 10);
        n /= 10;
    }
    int ans = *max_element(digit.begin(), digit.end());
    return ans;
}

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int max_Digit[nums.size()];
        for(int i=0; i < nums.size(); i++){
            max_Digit[i] = maxDigit(nums[i]);
        }

        vector<int> ans;
        for(int i=0; i < (nums.size()-1); i++){
            for(int j=i+1; j < nums.size(); j++){
                if(max_Digit[i] == max_Digit[j]){
                    ans.push_back(nums[i] + nums[j]);
                }
            }
        }

        if(ans.size() == 0){
            return -1;
        }
        else{
            int maxi = *max_element(ans.begin(), ans.end());
            return maxi;
        }
    }
};