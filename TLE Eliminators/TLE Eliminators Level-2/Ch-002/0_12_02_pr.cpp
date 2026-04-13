// Correct.
// (This is My code.)

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
    vector<vector<int>> ans;
    void solve(vector<pair<int,int>>& candidates, int target, int index, vector<int>& current){
        if(target < 0){ return;}
        if(target == 0){ 
            ans.push_back(current); 
            return;
        }
        for(int i = (index + 1); i < candidates.size(); i++){
            for(int j=1; j <= candidates[i].second; j++){
                current.push_back(candidates[i].first);
                solve(candidates, target-(j * candidates[i].first), i, current);
            }
            for(int j=0; j < candidates[i].second; j++){
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<pair<int,int>> vec;
        for(int i=0; i < candidates.size(); i++){
            if((i > 0) && (candidates[i] == candidates[i-1])){
                    int Size = vec.size();
                    vec[Size-1].second++;
            }
            else{ vec.push_back({candidates[i], 1});}
        }
        vector<int> current;
        solve(vec, target, -1, current);
        return ans;
    }
};