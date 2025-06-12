// Correct.
// I Solved it with the Help of Hints.

// 719. Find K-th Smallest Pair Distance
// https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/



































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
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size(); 
        sort(nums.begin(), nums.end()); // O(n * log(n)).
        
        int left = 0, right = (nums[n-1] - nums[0]);
        int ans;
        while(left <= right){  // O(log(nums[n-1] - nums[0])).
            int mid = (left + right)/ 2;
            int no_of_numbers = 0;

            for(int i=0; i < n-1; i++){ // O(n)
                int X = (mid + nums[i]);
                int index = upper_bound(nums.begin()+i+1, nums.end(), X) - (nums.begin());

                if(index != i){
                    if(index == n){
                        no_of_numbers += (index - i - 1);
                    }
                    else{
                        no_of_numbers += (index - i - 1);
                    }
                }
                else{
                    if(nums[index] >= X){
                        no_of_numbers += (index - i - 1);
                    }
                }
            }

            if(no_of_numbers >= k){
                right = mid - 1;
                ans = mid;
            }
            else{
                left = mid + 1;
            }
        }

        return ans;
        // TC = O(n * log(n) + n * log(nums[i]))
        // TC = O(n * log(n) + n * log(1e6)).

        // TC = O(n * log(n)).
    }
};