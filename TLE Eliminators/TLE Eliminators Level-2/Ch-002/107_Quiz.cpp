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
    vector<int> vec;

    void solve(int i, int n, int k) {
        if (vec.size() == k) {
            ans.push_back(vec);
            return;
        }
        for (int j = i; j <= n; j++) {
            vec.push_back(j);
            solve(j+1, n, k);
            vec.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        solve(1, n, k);
        return ans;
    }
};