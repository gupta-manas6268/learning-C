// Correct.

// 1854. Maximum Population Year
// https://leetcode.com/problems/maximum-population-year/description/




































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
    int maximumPopulation(vector<vector<int>>& logs) {
        int n = logs.size();
        int arr[100] = {0};
        for(int i=0; i < n; i++){
            int start = (logs[i][0]-1950);
            int end = (logs[i][1]-1950);
            for(int j = start; j < end; j++){
                arr[j] += 1;
            }
        }

        int maxi = 0, index = -1;
        for(int i=0; i < 100; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                index = i;
            }
        }

        int ans = (index + 1950);
        return ans;
    }
};