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
    vector<vector<int>> ans;
    vector<int> vec;
    void My_Subsets(int i, vector<int> nums){
        int n = nums.size();
        if(i == n){
            ans.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        My_Subsets(i+1, nums);
        vec.pop_back();
        My_Subsets(i+1, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        My_Subsets(0, nums);
        return ans;
    }
};