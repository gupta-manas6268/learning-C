// Wrong.

// 862. Shortest Subarray with Sum at Least K
// https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/description/




































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
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int left = 0, right = 0;
        int ans = 100001;
        for(int i=0; i<n; i++){
            sum += nums[i];
            right++;
            while(sum >= k){
                int length = (right - left);
                ans = min(ans,length);
                sum -= nums[left];
                left++;
            }
        }
        if(ans == 100001){ ans = -1;}

        return ans;
    }
};