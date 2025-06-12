// 

// 2321. Maximum Score Of Spliced Array
// https://leetcode.com/problems/maximum-score-of-spliced-array/description/



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
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int sum_of_1 = 0, sum_of_2 = 0;
        for(int i=0; i<n; i++){
            sum_of_1 += nums1[i];
            sum_of_2 += nums2[i];
        }

        vector<int> vec_12(n);  // (2nd - 1st)
        vector<int> vec_21(n);  // (1st - 2nd)

        for(int i=0; i<n; i++){
            vec_12[i] = (nums2[i] - nums1[i]);
            vec_21[i] = (nums1[i] - nums2[i]);
        }

        int max_Change_1 = 0, max_Change_2 = 0;
        int sum_1 = 0, sum_2 = 0;
        for(int i=0; i<n; i++){
            sum_1 += nums1[i];
            max_Change_1 = max(max_Change_1, sum_1);

            if(sum_1 < 0){
                sum_1 = 0;
            }
        }
        for(int i=0; i<n; i++){
            sum_2 += nums2[i];
            max_Change_2 = max(max_Change_2, sum_2);

            if(sum_2 < 0){
                sum_2 = 0;
            }
        }

        int ans = max(sum_of_1 + max_Change_1, sum_of_2 + max_Change_2);
        return ans;
    }
};