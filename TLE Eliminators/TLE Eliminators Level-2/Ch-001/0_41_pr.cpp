// Correct.

// X. The maximum path-sum
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int max_path(vector<vector<int>> grid, int n, int m, int i, int j){
    if((i >= n) || (j >= m)){
        return INT_MIN;
    }
    if((i == (n-1)) && (j == (m-1))){
        return grid[i][j];
    }

    return max(max_path(grid, n, m, i+1, j), max_path(grid, n, m, i, j+1)) + grid[i][j];
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<vector<int>> grid;
    for(int i=0; i<n; i++){
        vector<int> Temporary;
        for(int j=0; j<m; j++){
            int temp; cin >> temp;
            Temporary.push_back(temp);
        }
        grid.push_back(Temporary);
    }

    cout << max_path(grid, n, m, 0, 0);
}