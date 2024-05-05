// Correct.

// 78. Subsets
// https://leetcode.com/problems/subsets/description/

















#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}





class Solution {
    void helper(int index, int n, vector<int>&nums, vector<int>temp, vector<vector<int>>&ans){
        if(index == n){
            ans.push_back(temp);
            return ;
        }

        helper(index+1, n, nums, temp, ans);
        temp.push_back(nums[index]);
        helper(index+1, n, nums, temp, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, n, nums, temp, ans);
        
        return ans;
    }
};