// Run this code in Leetcode again.

// Wrong.

// 40. Combination Sum II
// https://leetcode.com/problems/combination-sum-ii/description/

































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
    // int sum = 
    vector<vector<int>> ans;

    void solve(int i, vector<int> current, int sum, vector<int> candidates, int target){
        if((i > 0) && (candidates[i] == candidates[i-1])){
            solve(i+1, current, sum, candidates, target);
        }

        int m = candidates.size();
        if(i == m){ return;}
        if(sum == target){
            sort(current.begin(), current.end());
            sort(ans.begin(), ans.end());

            ans.push_back(current);            
        }
        else if(sum > target){
            return;
        }

        solve(i+1, current, sum, candidates, target);
        current.push_back(candidates[i]);
        sum += candidates[i];
        solve(i+1, current, sum, candidates, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        solve(0, {}, 0, candidates, target);

        return ans;
    }
};