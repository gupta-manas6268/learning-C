// Correct.
// This is Mentor's code.

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
        vector<int> flips(n, 0);
        for(int i=0; i<n; i++){
            int current_Bit = nums[i];
            if(i > 0){
                int previous = flips[i-1];
                int before_K = (i-k >= 0? flips[i-k]:0);
                int total_Operations = (previous - before_K);
                if(total_Operations%2 != 0){ // odd
                    current_Bit = (current_Bit ^ 1);
                    // flipped current bit due to previous operations.
                }
            }
            if(current_Bit == 0){
                if((i + k) > n){
                    return -1;
                }
                flips[i] = 1;
            }
            if(i > 0){
                flips[i] += flips[i-1]; // prefix_sum
            }
            nums[i] = 1;
        }

        return flips[n-1];
    }
};