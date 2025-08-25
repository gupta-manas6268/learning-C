// Correct.
// (This is My code.)

// 215. Kth Largest Element in an Array
// https://leetcode.com/problems/kth-largest-element-in-an-array/description/

































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
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // priority_queue<int, vector<int>, greater<int>> pq;
        priority_queue<int> pq;
        for(int i=0; i < nums.size(); i++){
            pq.push(nums[i]);
        }

        int ans;
        for(int i=0; i < k; i++){
            if(i == (k-1)){
                ans = pq.top();
            }
            pq.pop();
        }

        return ans;
    }
};