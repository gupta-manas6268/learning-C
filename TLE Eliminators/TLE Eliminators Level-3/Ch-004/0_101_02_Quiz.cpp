// Correct.
// This is Mentor's code.

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
        deque<int> deq;
        vector<long long> prefix_Sum(n+1, 0);

        for(int i=0; i<n; i++){
            prefix_Sum[i+1] = (prefix_Sum[i] + nums[i]);
        }

        int ans = n+1;
        for(int i=0; i <= n; i++){
            while((deq.empty() != true) && ((prefix_Sum[i] - prefix_Sum[deq.front()]) >= k)){
                ans = min(ans, i-deq.front());
                deq.pop_front();
            }

            // For '-ve' element, we 'pop_back' that element in 'deque'.
            while((deq.empty() != true) && (prefix_Sum[i] <= prefix_Sum[deq.back()])){
                deq.pop_back();
            }

            deq.push_back(i); // 'deq' => stores index.
        }
        if(ans == n+1){ ans = -1;}

        return ans;
        // TC = O(n).
    }
};