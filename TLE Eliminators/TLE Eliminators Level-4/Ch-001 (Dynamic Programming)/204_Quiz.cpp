// Correct.
// (I Solved it myself. So, no need to Write in Register.)

// Removal Game
// https://cses.fi/problemset/task/1097




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> dp(5000+10, vector<int> (5000+10, -INF));
int ans = 0;
int solve(int i, int j, vector<int>& x, int n, int turn, int curr){
    if(i <= j){
        if(dp[i][j] != -INF){
            return dp[i][j];
        }

        if(turn == 1){
            dp[i][j] = max(solve(i+1, j, x, n, 2, curr+x[i]) + x[i], solve(i, j-1, x, n, 2, curr+x[j]) + x[j]);
        }
        else if(turn == 2){
            dp[i][j] = min(solve(i+1, j, x, n, 1, curr), solve(i, j-1, x, n, 1, curr));
        }
        return dp[i][j];
    }
    return 0;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> x(n);
    for(int i=0; i < n; i++){ cin >> x[i];}

    // Solution
    solve(0, n-1, x, n, 1, 0);
    ans = dp[0][n-1];

    // O/P
    cout << ans << endl;
}