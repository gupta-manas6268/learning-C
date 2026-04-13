// Correct.

// B. Mashmokh and ACM
// https://codeforces.com/contest/414/problem/B




































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
    int n, k; cin >> n >> k;

    // Solution
    vector<vector<int>> dp(n+10, vector<int> (k+10, 0));
    for(int i=1; i <= n; i++){ dp[i][1] = 1;}

    for(int j=1; j <= k; j++){
        for(int i=1; i <= n; i++){
            for(int i_dash = i; i_dash <= n; i_dash += i){
                dp[i_dash][j+1] += dp[i][j];
                dp[i_dash][j+1] %= MOD;
            }
        }
    }
    int ans = 0;
    for(int i=1; i <= n; i++){
        ans += dp[i][k];
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
    // TC = O(n * k * log(n))
    // SC = O(n * k)
}