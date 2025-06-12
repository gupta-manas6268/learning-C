// Correct.
// This is Mentor's code.

// 4. Median of Two Sorted Arrays
// https://leetcode.com/problems/median-of-two-sorted-arrays/description/



































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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            swap(nums1, nums2);
        }
        int n = nums1.size(), m = nums2.size();
        int left = 0, right = n;
        double ans = 0;
        while(left <= right){
            int cut_1 = (left + right)/ 2;
            // 'cut_1' => It gives us the first half of the combined array.
            // 'left_1' & 'right_1' are left and right pointer of 1st half
            //    of Combined array.
            int cut_2 = ((n + m + 1)/2) - cut_1;
            // 'cut_2' => It gives us the second half of the combined array.
            // 'left_1' & 'right_1' are left and right pointer of 2nd half
            //    of Combined array.

            int left_1 = (cut_1 == 0 ? INT_MIN: nums1[cut_1 - 1]);
            int left_2 = (cut_2 == 0 ? INT_MIN: nums2[cut_2 - 1]);
            int right_1 = (cut_1 == n ? INT_MAX: nums1[cut_1]);
            int right_2 = (cut_2 == m ? INT_MAX: nums2[cut_2]);
            if((left_1 <= right_2) && (left_2 <= right_1)){
            // If above condition is not true then we cut combined array
            //  in wrong manner, so we cut it after by taking different
            //  values of 'cut_1' & 'cut_2'.
                ans = max(left_1, left_2);
                if((n + m)%2 == 0){
                    ans = (ans + min(right_1, right_2))/ 2;
                }
                break;
            }
            else if(left_1 > right_2){
                right = (cut_1 - 1);
            }
            else{
                left = (cut_1 + 1);
            }
        }

        return ans;
    }
};