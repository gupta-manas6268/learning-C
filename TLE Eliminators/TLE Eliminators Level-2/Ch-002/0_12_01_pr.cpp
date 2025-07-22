// Correct.
// This is Mentor's code.

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
    vector<vector<int>> combinations;
    vector<int> current_Subset;

    void backtrack(int index, int target, vector<int>& freq){
        if(target == 0){
            combinations.push_back(current_Subset);
            return;
        }

        if((index == freq.size()) || (target < 0)){
            return;
        }

        // Not Choosing the Element.
        backtrack(index + 1, target, freq);

        // Choosing the Element.
        if(freq[index] > 0){
            freq[index]--;
            current_Subset.push_back(index);
            backtrack(index, target - index, freq);
            current_Subset.pop_back();
            freq[index]++;
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> freq(51, 0); // Size = 51, and initialize value from 0.
        for(auto &i : candidates){ freq[i]++;}
        backtrack(1, target, freq);
        return combinations;
    }
};