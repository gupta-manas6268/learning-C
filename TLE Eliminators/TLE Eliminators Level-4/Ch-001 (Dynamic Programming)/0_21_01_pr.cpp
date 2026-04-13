// Wrong. (MLE)
// This is Mentor's code.

// Coin Combinations II
// https://cses.fi/problemset/task/1636



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, x; cin >> n >> x;
    vector<int> c(n);
    for(int i=0; i < n; i++){ cin >> c[i];}

    // Solution
    vector<vector<int>> dp(n + 1, vector<int>(x + 1));
    // dp[i][k] = no. of ways to construct sum-k s.t.
    //            all coins before coin[i] are unusable,
    //      & all coins from i to n-1 are usable.

    // Base-case
    for(int i=0; i < n; i++){
        dp[i][0] = 1;
    }

    // dp[i][k] = dp[i+1][k] + dp[i][k - c[i]];
    for(int i = n-1; i >= 0; i--){
        for(int sum = 1; sum <= x; sum++){
            int skipping = dp[i+1][sum];
            int picking = 0;
            if(c[i] <= sum){
                picking = dp[i][sum - c[i]];
            }
            dp[i][sum] = (skipping + picking) % MOD;
        }
    }

    // O/P
    int ans = dp[0][x];
    cout << ans << endl;
    // TC = O(n * x)
    // SC = O(n * x) => O(1e8) => (MLE)
    //  SC => 800 MB.
}