// This is Mentor's code.
// Correct.

// 632. Smallest Range Covering Elements from K Lists
// https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/




































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
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<pair<int,int>> arr;  // stores => (element, index).

        for(int i=0; i < n; i++){
            for(auto &j : nums[i]){
                arr.push_back({j, i});
            }
        }
        sort(arr.begin(), arr.end());
        map<int,int> mp;  // Initialise 'map'.
        vector<int> answer{1, int(1e9)};

        for(int i=0, j=0; i < arr.size(); i++){
            mp[arr[i].second]++;  // insert arr[i]

            if(mp.size() == n){
                while(mp.size() == n){
                    mp[arr[j].second]--;        
                    if(mp[arr[j].second] == 0){
                        mp.erase(arr[j].second);  // erasing it from map.
                    }
                    j++;
                }
                j--;
                mp[arr[j].second]++;  // put it back.

                if((arr[i].first - arr[j].first + 1) < (answer[1] - answer[0] + 1)){
                    answer = {arr[j].first, arr[i].first};
                    //          {Left     ,  Right}
                }
            }
        }

        return answer;
    }
};