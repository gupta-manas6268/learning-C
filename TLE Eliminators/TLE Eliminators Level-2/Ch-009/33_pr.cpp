// Correct.

// 1248. Count Number of Nice Subarrays
// https://leetcode.com/problems/count-number-of-nice-subarrays/description/




































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
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n);
        for(int i=0; i < n; i++){
            if((nums[i] % 2) == 0){ // Even
                arr[i] = 0;
            }
            else{ // Odd
                arr[i] = 1;
            }
        }
        vector<int> Prefix_Sum(n);
        for(int i=0; i < n; i++){
            if(i == 0){
                Prefix_Sum[i] = arr[i];
            }
            else{
                Prefix_Sum[i] = (Prefix_Sum[i-1] + arr[i]);
            }
        }

        int ans = 0;
        for(int i = -1; i < n; i++){
            int X;
            if(i == -1){
                X = k;
            }
            else{
                X = (Prefix_Sum[i] + k);
            }
            int lb = lower_bound(Prefix_Sum.begin(), Prefix_Sum.end(), X) - Prefix_Sum.begin();
            int ub = upper_bound(Prefix_Sum.begin(), Prefix_Sum.end(), X) - Prefix_Sum.begin();

            ans += (ub - lb);
        }

        return ans;
    }
};