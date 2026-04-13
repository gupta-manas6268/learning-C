// Correct.

// Grid Paths I
// https://cses.fi/problemset/task/1638




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> dp(1010, vector<int> (1010, -1));
int num_Paths(int i, int j, vector<string>& grid){
    int n = grid.size();

    if((i >= n) || (j >= n)){
        return 0;
    }
    if(grid[i][j] == '*'){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if((i == (n-1)) && (j == (n-1))){
        return dp[i][j] = 1;
    }

    return dp[i][j] = ((num_Paths(i+1, j, grid) + num_Paths(i, j+1, grid)) % MOD);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<string> grid(n);
    for(int i=0; i < n; i++){
        string temp; cin >> temp;
        grid[i] = temp;
    }

    // O/P
    int ans = num_Paths(0, 0, grid);
    cout << ans << endl;
}