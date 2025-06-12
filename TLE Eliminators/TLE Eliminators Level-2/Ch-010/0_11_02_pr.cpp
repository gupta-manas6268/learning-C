// This is Mentor's code.
// Correct.

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

        if(n == 1){ return 0;}
        if(nums[0] > nums[1]){ return 0;}
        if(nums[n-1] > nums[n-2]){ return n-1;}

        int left = 1, right = n-2;
        while(left <= right){
            int mid = (left + right)/2;

            if((nums[mid] > nums[mid-1]) && (nums[mid] > nums[mid + 1])){  // peak found
                return mid;
            }
            else if(nums[mid] > nums[mid-1]){  // peak on the right.
                left = mid+1;
            }
            else{  // peak on the left
                right = mid-1;
            }
        }

        return -1; // never going to happen.

        // TC = O(log(n)).
        // SC = O(1).
    }
};