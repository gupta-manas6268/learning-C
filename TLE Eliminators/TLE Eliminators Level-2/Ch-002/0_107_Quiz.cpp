// This is HomeWork Question (Solve it yourself.)

// Correct.

// 77. Combinations
// https://leetcode.com/problems/combinations/description/


































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
    vector<vector<int>> ans;
    void solve(int maxi, int n, int k, vector<int>& current){
        if(current.size() == k){
            ans.push_back(current); return;
        }
        for(int i = maxi + 1; i <= n; i++){
            current.push_back(i);
            solve(i, n, k, current);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        solve(0, n, k, current);
        return ans;
    }
};