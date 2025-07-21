// Correct. 

// 78. Subsets
// https://leetcode.com/problems/subsets/description/






























#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}



// reference is similar to a global variable.

class Solution {   //  TC = O(pow(2, N)).
                   //  SC = O(pow(2, N) * N).     [SC -> Space Complexity.]
public:
    vector<int> current_subset;
    vector<vector<int>> final_output;
    vector<int> val;

    void solve(int i){   // 'i' is the index we want to choose.
        // pushback to final output

        // Base case: If index to add is outside the array bounds, then stop.
        if(i == val.size()){
            final_output.push_back(current_subset);
            return;
        }

        solve(i+1);  // without adding anything.
        current_subset.push_back(val[i]);

        solve(i+1);  
        current_subset.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        final_output.clear();
        val = nums;

        solve(0);
        return final_output;
    }
};