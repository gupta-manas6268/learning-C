// Wrong. (Runtime Error.)

// 162. Find Peak Element
// https://leetcode.com/problems/find-peak-element/description/






























#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}


// Note:
//  If we go in the direction of rising slope, you
//   are going to find a peak element.
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;

        int ans;
        if(n == 1){ ans = n-1;}
        while(left <= right){
            int mid = (left + right)/2;

            if(mid == 0){
                if(nums[mid] > nums[mid+1]){
                    ans = mid; break;
                }
                else{
                    left = mid+1;
                }
            }
            else if(mid == (n-1)){
                if(nums[mid] > nums[mid-1]){
                    ans = mid; break;
                }
                else{
                    right = mid-1;
                }
            }

            else if((nums[mid] > nums[mid-1]) && (nums[mid] < nums[mid+1])){ 
                // Increasing function.
                left = mid+1;
            }
            else if((nums[mid] < nums[mid-1]) && (nums[mid] > nums[mid+1])){
                // Decreasing function.
                right = mid-1;
            }
            else{
                ans = mid; break;
            }
        }

        return ans;
    }
};