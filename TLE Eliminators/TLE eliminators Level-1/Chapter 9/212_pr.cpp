// Correct.

// 2784. Check if Array is Good
// https://leetcode.com/problems/check-if-array-is-good/description/


















#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = 1;

        bool ans;
        for(int i=0; i < nums.size(); i++){
            if((i < (nums.size() - 1))){
                if(nums[i] == a){
                    a++;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else{
                if(nums[i] == (nums.size() - 1)){
                    ans = true;
                    break;
                }
                else{
                    ans = false;
                    break;
                }
            }
        }

        return ans;
    }
};