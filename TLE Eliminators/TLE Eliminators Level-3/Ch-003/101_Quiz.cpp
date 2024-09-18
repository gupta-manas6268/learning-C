// This is Mentor's code.
// Correct.

// 480. Sliding Window Median
// https://leetcode.com/problems/sliding-window-median/description/



































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
        multiset<int> low, high;
        vector<double> medians;

        for(int i=0; i < nums.size(); i++){
            low.insert(nums[i]);
            high.insert(*low.rbegin());  // Largest element from Low
                                         //  to High multiset.
            low.erase(low.find(*low.rbegin()));

            if(low.size() < high.size()){
                low.insert(*high.begin());
                high.erase(high.find(*high.begin()));
            }

            if(i >= (k-1)){
                if(k & 1){
                    medians.push_back(*low.rbegin());
                }
                else{
                    medians.push_back(((double)*low.rbegin() + (double)*high.begin())/ 2.0);
                }

                if(nums[i - k + 1] <= *low.rbegin()){
                    low.erase(low.find(nums[i - k + 1]));  // Erase from multiset.
                }
                else{
                    high.erase(high.find(nums[i - k + 1]));
                }
            }
        }

        return medians;
    }
};