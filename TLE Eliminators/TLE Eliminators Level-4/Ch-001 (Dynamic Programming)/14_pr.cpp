// Correct.

// Minimizing Coins
// https://cses.fi/problemset/task/1634




































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
    vector<int> dp(x+10, -1);
    dp[0] = 0;
    // Iterative DP
    for(int i=1; i <= x; i++){
        for(int j=0; j < n; j++){
            if((i - c[j]) >= 0){
                if(dp[i - c[j]] != -1){
                    if(dp[i] == -1){
                        dp[i] = (dp[i - c[j]] + 1);
                    }
                    else{
                        dp[i] = min(dp[i], dp[i - c[j]] + 1);
                    }
                }
            }
        }
    }

    // O/P
    int ans = dp[x];
    cout << ans << endl;
}