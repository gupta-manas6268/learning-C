// Correct.
// I write this code with the help of Hint.

// 287. Find the Duplicate Number
// https://leetcode.com/problems/find-the-duplicate-number/description/



































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
    int findDuplicate(vector<int>& nums) {
        int n = (nums.size()-1);
        int left = 1, right = n;
        int ans;
        while(left <= right){
            int mid = (left + right)/2;

            int no_of_numbers = 0;
            for(int i=0; i < n+1; i++){
                if(mid >= nums[i]){
                    no_of_numbers++;
                }
            }

            if(no_of_numbers >= (mid + 1)){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }

        return ans;
    }
};