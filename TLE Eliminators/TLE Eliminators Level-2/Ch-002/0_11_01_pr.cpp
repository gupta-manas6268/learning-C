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
    vector<int> vec;
    int sum = 0;
    bool Return = false;

    void solve(int i, vector<int>& candidates, int target){
        vec.push_back(candidates[i]);
        sum += candidates[i];
        int n = candidates.size();

        if(Return == true){
            Return = false;
            return;
        }
        if(i == (n-1)){ 
            Return = true;
            // return;
        }

        if(sum == target){
            ans.push_back(vec);
            sum -= candidates[i];
            return;
        }
        else if(sum > target){
            // vec.erase(vec.begin()+i);
            sum -= candidates[i];
            return;
        }

        for(int j=i; j<n; j++){
            solve(j, candidates, target);
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        for(int i=0; i<n; i++){
            solve(i, candidates, target);
        }

        return ans;
    }
};