// 

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

        nums1.erase(nums1.begin() + ((m+n)/2 + 1), nums1.begin() + m);
        nums2.erase(nums2.begin() + ((m+n)/2 + 1), nums2.begin() + n);

        m = min(m, (m+n)/2 + 1);
        n = min(n, (m+n)/2 + 1);

        if((m+n)%2 != 0){ // odd

            int left = 1, right = m;
            int index;
            int final_index = m;
            while(left <= right){
                int mid = (left + right)/2;
                index = upper_bound(nums2.begin(), nums2.end(), nums1[mid-1]) - nums2.begin();

                if(((index-1) + mid) >= ((m+n)/2 + 1)){
                    final_index = mid;
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }

            
        }
        else{ // even

        }
    }
};