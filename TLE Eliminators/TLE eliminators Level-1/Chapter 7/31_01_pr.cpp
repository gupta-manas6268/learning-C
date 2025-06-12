// Correct.
// But this code is Wrong, because it use division method
//  which is not recommended in Question.


// https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector <int> ans(n, 0);

        int mul_1 = 1, mul_2 = 1;
        int NoOfZero = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){ 
                NoOfZero++;
                mul_1 *= nums[i];
            }
            else{
                mul_1 *= nums[i];
                mul_2 *= nums[i];
            }
        }

        if(NoOfZero > 1){
            
        }
        else if(NoOfZero == 1){
            for(int i=0; i<n; i++){
                if(nums[i] == 0){
                    ans[i] = mul_2;
                }
                else{
                    ans[i] = mul_1;
                }
            }
        }
        else{
            for(int i=0; i<n; i++){
                ans[i] = (mul_1/ nums[i]);
            }
        }

        return ans;
    }
};