// I have already solved this Problem in '005_02_quiz.cpp'

// Correct.

// 239. Sliding Window Maximum
// https://leetcode.com/problems/sliding-window-maximum/description/



































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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> deq;

        for(int i=0; i<n; i++){
            while((deq.empty() != true) && (nums[deq.back()] <= nums[i])){
                deq.pop_back();
            }
            deq.push_back(i);

            if(deq.front() == (i-k)){
                deq.pop_front();
            }
            if(i >= (k-1)){
                ans.push_back(nums[deq.front()]);
            }
        }

        return ans;
    }
};