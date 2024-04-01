// Correct.

// https://leetcode.com/problems/sqrtx/description/


class Solution {
public:
    int mySqrt(int x) {
        int start = 0, end = 1e5;
        int ans = 0;

        while(start <= end){
            int mid = (start + end)/ 2;
            long sq = 1L * mid * mid;

            if(sq <= x){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return ans;
    }
};