// Correct.
// (This is My code with the Claude-AI.)

// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/description/



































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
    void solve(int i, int n, vector<int>& arr){
        if(arr[i] == 0){ 
            arr[i] = (arr[i+1] + arr[i+2]);
        }
        if(i == 0){ return;}
        solve(i-1, n, arr);
    }
    int climbStairs(int n) {
        int ans;
        vector<int> arr(n, 0);
        if(n == 1){ ans = 1;}
        else{
            arr[n-1] = 1; arr[n-2] = 2;
            solve(n-1, n, arr);
            ans = arr[0];
        }

        return ans;
    }
};