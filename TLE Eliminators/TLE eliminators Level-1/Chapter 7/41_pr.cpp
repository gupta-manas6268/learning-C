// Correct.

// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int AM = (n*(n+1))/ 2;
        int sum = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        int ans = AM - sum;

        return ans;
    }
};