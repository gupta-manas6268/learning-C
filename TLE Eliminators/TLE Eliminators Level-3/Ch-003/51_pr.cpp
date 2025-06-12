// Correct.

// 2090. K Radius Subarray Averages
// https://leetcode.com/problems/k-radius-subarray-averages/description/





































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
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans;
        long long sum = 0;
        if(k == 0){
            ans = nums;
        }
        else if((2*k + 1) <= n){
            for(int i=0; i<k; i++){ 
                // sum += nums[i];
                sum += nums.at(i);
                ans.push_back(-1);
            }

            for(int i=k; i < (2*k); i++){ sum += nums[i];}
            for(int i=(2*k); i<n; i++){
                sum += nums[i];
                int temp = (int)(sum/ ((2*k) + 1));
                ans.push_back(temp);

                sum -= nums[i-(2*k)];
            }

            for(int i=0; i<k; i++){ 
                ans.push_back(-1);
            }
        }
        else{
            for(int i=0; i<n; i++){
                ans.push_back(-1);
            }
        }

        return ans;
    }
};