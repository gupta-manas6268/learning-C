// Correct.
// (I solved it with the help of Claude-AI.)

// 198. House Robber
// https://leetcode.com/problems/house-robber/description/



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
    int dp[110] = {-1}; 
    // (↑) It only gives dp[0] = -1, & all else have 
    //      dp[1] = 0, dp[2] = 0, dp[108] = 0, dp[109] = 0.

    // vector<int> dp(110, -1); // => Error
    int func(int index, vector<int>& a){
        if(index < 0){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        dp[index] = max(a[index] + func(index - 2, a), func(index - 1, a));
        return dp[index];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i <= 109; i++){ dp[i] = -1;}
        int ans = func(n-1, nums);
        return ans;
    }
};