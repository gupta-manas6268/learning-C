// There is 1-Screenshot.


// Wrong.

// 189. Rotate Array
// https://leetcode.com/problems/rotate-array/description/


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
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // k = k % n;

        // int temp[k];
        // for(int i=0; i<k; i++){
        //     temp[i] = nums[i];
        // }

        // for(int i=k; i<n; i++){
        //     nums[i-k] = nums[i];
        // }

        // for(int i = n-k; i<n; i++){
        //     nums[i] = temp[i - (n-k)];
        // }

        int n = nums.size();
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.begin()+n);
        reverse(nums.begin(), nums.begin()+n);

        // TC = O(n + k).
    }
};