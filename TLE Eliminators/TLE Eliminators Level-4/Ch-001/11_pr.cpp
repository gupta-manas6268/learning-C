// Correct.
// (This is My code. I used Iterative DP i.e. 
//   for-loop, instead of recursion.)

// Dice Combinations
// https://cses.fi/problemset/task/1633


































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
    vector<int> dp(n+1);
    int DP[7];
    DP[1] = 1; DP[2] = 2; DP[3] = 4;
    DP[4] = 8; DP[5] = 16; DP[6] = 32;

    for(int i=1; i <= n; i++){
        if(i <= 6){ dp[i] = DP[i];}
        else{
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6]) % MOD;
        }
    }

    // O/P
    int ans = dp[n];
    cout << ans << endl;
}