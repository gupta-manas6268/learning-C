#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
int n, m;
vector<vector<int>> dp(1e5+10, vector<int> (1e5+10, -1));
int min_Path(int i, int j, vector<vector<int>>& grid){
    if((i >= n) || (j >= m)){ // moving outside grid
        return INF;
    }
    if((i == n-1) && (j == m-1)){ // reached destination
        return grid[n-1][m-1];
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    dp[i][j] = grid[i][j] + min(min_Path(i, j + 1, grid), min_Path(i + 1, j, grid));
    return dp[i][j];
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    cin >> n >> m;
    // (1 <= n, m <= 1e5)
    vector<vector<int>> grid(n);
    for(int i=0; i < n; i++){
        vector<int> temp(m);
        for(int j=0; j < m; j++){ cin >> temp[j];}
        grid[i] = temp;
    }

    // O/P
    int ans = min_Path(0, 0, grid);
    cout << ans << endl;
}