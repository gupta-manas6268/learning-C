// Wrong.

// https://leetcode.com/problems/sqrtx/description/


class Solution {
public:
    int mySqrt(int x) {
        int ans;

        for(int i=1; i*i <= x; i++){
            if((i*i) == x){
                ans = i;
                break;
            }
            else if((i*i) > x){
                float mid = (i - (1/2));
                float squareMid = (mid * mid);

                float left = squareMid - (i-1)*(i-1);
                float right = (i*i) - squareMid;

                if(left < right){
                    ans = i-1;
                }
                else if(right < left){
                    ans = i;
                }

                break;
            }
        }

        return ans;
    }
};