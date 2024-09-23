// Wrong.

// 39. Combination Sum
// https://leetcode.com/problems/combination-sum/description/



































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
    // vector<int> vec;
    int sum = 0;
    bool Return = false;

    void solve(int i, vector<int> vec, vector<int>& candidates, int target){
        vec.push_back(candidates[i]);
        sum += candidates[i];
        if(sum == target){
            sum -= candidates[i];
            ans.push_back(vec);
            return;
        }
        else if(sum > target){
            sum -= candidates[i];
            return;
        }
        solve(i, vec, candidates, target);
        solve(i+1, vec, candidates, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // vector<int> vec;
        solve(0, {}, candidates, target);

        return ans;
    }
};