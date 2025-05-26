// Correct. 
// This is My code of Mentor's Version.

// 90. Subsets II
// https://leetcode.com/problems/subsets-ii/description/



































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution {
public:
    // Definition of Duplicate Sub-sets:
    //  [1, 4] = [4, 1]
    //  So, ordering of elements doesn't matter i.e. we can sort 
    //   Vector, which we did in Line-77.
    vector<vector<int>> ans;
    void My_Subsets(int i, vector<pair<int,int>> nums, vector<int> current){
        int n = nums.size();
        if(i == n){
            ans.push_back(current);
            return;
        }
        My_Subsets(i+1, nums, current);
        for(int j = 1; j <= nums[i].second; j++){
            current.push_back(nums[i].first);
            My_Subsets(i+1, nums, current);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<pair<int,int>> vec;
        vec.push_back({nums[0], 1});
        for(int i=1; i < n; i++){
            if(nums[i] == nums[i-1]){
                vec[vec.size()-1].second++;
            }
            else{
                vec.push_back({nums[i], 1});
            }
        }
        vector<int> current;
        My_Subsets(0, vec, current);
        return ans;
    }
};