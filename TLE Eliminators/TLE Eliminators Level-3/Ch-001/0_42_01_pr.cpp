// Wrong.

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
        int m = nums1.size(), n = nums2.size();

        int left = min(*min_element(nums1.begin(), nums1.end()), *min_element(nums2.begin(), nums2.end()));
        int right = max(*max_element(nums1.begin(), nums1.end()), *max_element(nums2.begin(), nums2.end()));

        double precision = 1e-8;
        double ans;

        if((m+n)%2 != 0){ // odd
            for(int count = 0; count <= 50; count++){
                double mid = (left + right)/2;
                int index1 = upper_bound(nums1.begin(), nums1.end(), mid) - nums1.begin(); 
                int index2 = upper_bound(nums2.begin(), nums2.end(), mid) - nums2.begin(); 

                if((index1 + index2) >= (((m + n)/2) + 1)){
                    ans = mid;
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
        }
        else{ // even
            double ans1;
            for(int count = 0; count <= 50; count++){
                double mid = (left + right)/2;
                int index1 = upper_bound(nums1.begin(), nums1.end(), mid) - nums1.begin(); 
                int index2 = upper_bound(nums2.begin(), nums2.end(), mid) - nums2.begin(); 

                if((index1 + index2) >= ((m + n)/2) + 1){
                    ans1 = mid;
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }

            double ans2;
            for(int count = 0; count <= 50; count++){
                double mid = (left + right)/2;
                int index1 = upper_bound(nums1.begin(), nums1.end(), mid) - nums1.begin(); 
                int index2 = upper_bound(nums2.begin(), nums2.end(), mid) - nums2.begin(); 

                if((index1 + index2) >= ((m + n)/2)){
                    ans2 = mid;
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }

            cout << ans1 << " " << ans2 << endl;
            ans = ((ans1 + ans2)/2);

        }

        return ans;
    }
};