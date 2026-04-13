// Correct.
// (This is My code with the Help of Claude
//   in 2nd Revision time.)
// (See Line-67 to 72.)

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
        int n = nums1.size(), m = nums2.size();

        double ans;
        if((n + m) % 2 != 0){ // Odd
            int num = (n + m + 1) / 2;
            
            // (These 2-Lines will give Runtime-error when 
            //   ((n == 0) || (m == 0)). So, we give
            //   left & right Constant values to avoid error.)
            // 
            // int left = min(nums1[0], nums2[0]);
            // int right = max(nums1[n - 1], nums2[m - 1]);
            int left = (-1e6-1), right = (1e6+1);
            while(left <= right){
                int mid = (left + right) / 2;

                int index_1 = 0, index_2 = 0;
                index_1 = upper_bound(nums1.begin(), nums1.end(), mid) - nums1.begin();
                index_2 = upper_bound(nums2.begin(), nums2.end(), mid) - nums2.begin();

                if((index_1 + index_2) >= num){
                    ans = (double)(mid);
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
        }
        else{ // Even
            int num_1 = (n + m - 1) / 2;
            int num_2 = (n + m + 1) / 2;
            int ans_1, ans_2;

            int left_1 = (-1e6-1), right_1 = (1e6+1);
            while(left_1 <= right_1){ // num_1
                int mid = (left_1 + right_1) / 2;

                int index_1 = 0, index_2 = 0;
                index_1 = upper_bound(nums1.begin(), nums1.end(), mid) - nums1.begin();
                index_2 = upper_bound(nums2.begin(), nums2.end(), mid) - nums2.begin();
                if((index_1 + index_2) >= (num_1 + 1)){
                    ans_1 = mid;
                    right_1 = mid - 1;
                }
                else{
                    left_1 = mid + 1;
                }
            }

            int left_2 = (-1e6-1), right_2 = (1e6+1);
            while(left_2 <= right_2){ // num_2
                int mid = (left_2 + right_2) / 2;

                int index_1 = 0, index_2 = 0;
                index_1 = upper_bound(nums1.begin(), nums1.end(), mid) - nums1.begin();
                index_2 = upper_bound(nums2.begin(), nums2.end(), mid) - nums2.begin();
                if((index_1 + index_2) >= (num_2 + 1)){
                    ans_2 = mid;
                    right_2 = mid - 1;
                }
                else{
                    left_2 = mid + 1;
                }
            }

            ans = (double)(((double)(ans_1 + ans_2)) / (double)(2));
        }

        return ans;
    }
};