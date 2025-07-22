// Correct.
// (This is My code.)

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
    void solve(vector<int>& candidates, int target, int index, vector<int>& current){
        if(target == 0){ 
            ans.push_back(current); 
            return;
        }
        for(int i = index; i < candidates.size(); i++){
            if(target >= candidates[i]){
                current.push_back(candidates[i]);
                solve(candidates, target-candidates[i], i, current);
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        solve(candidates, target, 0, current);
        return ans;
    }
};