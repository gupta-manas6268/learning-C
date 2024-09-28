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
    set<vector<int>> combinations;
    vector<int> current_Subset;

    void backtrack(int index, int target, set<int> values, vector<int>& candidates){
        if(target == 0){
            vector<int> temp = current_Subset;
            sort(temp.begin(), temp.end());
            combinations.insert(temp);
            return;
        }

        if((index == candidates.size()) || (target < 0)){
            return;
        }

        // Not Choosing the Element.
        if((index != 0) && (candidates[index-1] == candidates[index]) && (current_Subset[current_Subset.size()-1] != candidates[index])){
            backtrack(index + 1, target, values, candidates);
        }
        backtrack(index + 1, target, values, candidates);

        // Choosing the Element.
        current_Subset.push_back({candidates[index]});
        backtrack(index + 1, target - candidates[index], values, candidates);
        current_Subset.pop_back();
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<int> values;
        for(auto &Pair: candidates){
            values.insert(Pair);
        }

        backtrack(0, target, values, candidates);

        vector<vector<int>> ans;
        for(auto &Pair: combinations){
            ans.push_back(Pair);
        }
        return ans;
    }
};