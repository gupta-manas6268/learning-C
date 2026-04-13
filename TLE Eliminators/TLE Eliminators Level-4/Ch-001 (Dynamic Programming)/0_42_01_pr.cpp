// Wrong (MLE)
// (This is My code, but I didn't optimise 
//   SC = O(n) to SC = O(1). So, whenever you
//   see SC & TC can be optimise, You will
//  optimise SC & TC as, sometimes it can give MLE.))
     
// E. Tetrahedron
// https://codeforces.com/problemset/problem/166/E
 
     
     





























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
    int n; cin >> n;
 
    // Solution
    vector<vector<int>> dp(4, vector<int> (n+10, 0));
    dp[0][0] = 1, dp[0][1] = 0;
    dp[1][1] = 1, dp[2][1] = 1, dp[3][1] = 1;
    for(int i=2; i <= n; i++){
        dp[0][i] = (dp[1][i-1] + dp[2][i-1] + dp[3][i-1]);
        dp[0][i] %= MOD;
        dp[1][i] = (dp[0][i-1] + dp[2][i-1] + dp[3][i-1]);
        dp[1][i] %= MOD;
        dp[2][i] = (dp[0][i-1] + dp[1][i-1] + dp[3][i-1]);
        dp[2][i] %= MOD;
        dp[3][i] = (dp[0][i-1] + dp[1][i-1] + dp[2][i-1]);
        dp[3][i] %= MOD;
    }
 
    // O/P
    cout << dp[0][n] << endl;
    // TC = O(n)
    // SC = O(n)
}