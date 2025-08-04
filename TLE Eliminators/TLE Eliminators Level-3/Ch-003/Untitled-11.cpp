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
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> mp;
        for(int i=0; i < k; i++){
            mp.insert(nums[i]);
        }

        vector<double> ans;
        for(int i = k; i < n; i++){
            
        }
    }
};