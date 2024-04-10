// Correct.

// https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        for(int i=0; i < nums.size(); i++){
            if(i == 0){ prefix[i] = nums[i];}
            else{ prefix[i] = prefix[i-1]*nums[i];}
        }

        for(int i = nums.size()-1; i >= 0; i--){
            if(i == nums.size()-1){ suffix[i] = nums[i];}
            else{ suffix[i] = suffix[i+1]*nums[i];}
        }

        vector<int> ans;
        for(int i=0; i < nums.size(); i++){
            int temp = 1;

            if(i != 0){ temp *= prefix[i-1];}
            if(i != nums.size()-1){ temp *= suffix[i+1];}
            ans.push_back(temp);
        }

        return ans;
    }
};