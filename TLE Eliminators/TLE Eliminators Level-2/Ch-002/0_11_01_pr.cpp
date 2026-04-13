// Correct.
// This is Mentor's code.

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
    vector<vector<int>> combinations;
    vector<int> current_Subset;

    void backtrack(int index, int target, vector<int>& candidates){
        if(target == 0){
            combinations.push_back(current_Subset);
            return;
        }

        if((index == candidates.size()) || (target < 0)){
            return;
        }

        // Not Choosing the Element.
        backtrack(index + 1, target, candidates);

        // Choosing the Element.
        current_Subset.push_back({candidates[index]});
        backtrack(index, target - candidates[index], candidates);
        current_Subset.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(0, target, candidates);
        return combinations;
    }
};