// Correct.

// https://leetcode.com/problems/find-pivot-index/



class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            int left = 0, right = 0;

            for(int j=0; j<n; j++){
                if(j < i){ left += nums[j];}
                if(j > i){ right += nums[j];}
            }
            if(left == right){
                return i;
            }
        }

        return -1;
    }
};