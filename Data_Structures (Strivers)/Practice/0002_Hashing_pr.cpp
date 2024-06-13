// 

// 1838. Frequency of the Most Frequent Element
// https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int> m;
        int a = 0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] = a++;
        }
    }
};