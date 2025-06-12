// Wrong.
// This is My version of Mentor's code.

// 995. Minimum Number of K Consecutive Bit Flips
// https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/description/



































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
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        bool is_Ans = true;
        vector<int> operations(n, 0);
        int ans = 0;
        for(int i=0; i < (n-k+1); i++){
            if((i == 0) && (nums[i] == 0)){
                operations[i] = 1;
                ans = operations[i];
            }
            else{
                int effective_op = operations[i-1]; 
                // effective_op => effective_operations.
                if(i >= k){
                    effective_op = (operations[i-1] - operations[i-k]);
                }
                if(effective_op%2 != 0){ // odd
                    nums[i] = (1 - nums[i]); // To flip bits.
                }

                if(nums[i] == 0){
                    operations[i] = (operations[i-1] + 1);
                }
                else{
                    operations[i] = operations[i-1];
                }
                ans = operations[i];
            }
        }
        for(int i = (n-k+1); i<n; i++){
            int effective_op = ans;
            if(i >= k){
                effective_op = (ans - operations[i-k]);
            }
            if(effective_op%2 != 0){ // odd
                nums[i] = (1 - nums[i]);
            }

            if(nums[i] != 0){
                is_Ans = false; break;
            }
        }

        if(is_Ans == false){
            ans = -1;
        }

        return ans;
    }
};