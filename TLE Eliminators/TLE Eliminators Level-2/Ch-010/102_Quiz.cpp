// Correct.

// 2251. Number of Flowers in Full Bloom
// https://leetcode.com/problems/number-of-flowers-in-full-bloom/description/





































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
    // I solve this Question by using Difference Array of 'Ch-009'.
    
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n = people.size();
        vector<int> ans(n);
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            v.push_back({people[i], i});
        }
        sort(v.begin(), v.end());

        vector<int> difference_array(n+1, 0);
        for(auto it:flowers){
            int start_time = it[0];
            int end_time = it[1]+1;
            pair<int,int> temp = {start_time, INT_MIN};

            int index_1 = lower_bound(v.begin(), v.end(), temp) - v.begin();
            difference_array[index_1]++;
            temp = {end_time, INT_MIN};

            int index_2 = lower_bound(v.begin(), v.end(), temp) - v.begin();
            difference_array[index_2]--;
        }

        for(int i=1; i <= n; i++){
            difference_array[i] += difference_array[i-1];
        }
        for(int i=0; i<n; i++){
            ans[v[i].second] = difference_array[i];
        }

        return ans;
    }
};