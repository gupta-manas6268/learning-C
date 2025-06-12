// Correct.
// I write this code myself, but by seeing Testcase when
//  this code failed on those Testcases.

// 55. Jump Game
// https://leetcode.com/problems/jump-game/description/


































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
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int index_0 = -1;
        for(int i = (n-1); i >= 0; i--){
            if(nums[i] == 0){
                index_0 = max(index_0, i+1);
                if(index_0 == n){
                    index_0 = -1;
                }
            }
            if(index_0 != -1){
                if((index_0 - (i + nums[i])) <= 0){
                    index_0 = -1;
                }
            }
        }

        bool ans;
        if(index_0 == -1){ ans = true;}
        else{ ans = false;}

        return ans;
    }
};