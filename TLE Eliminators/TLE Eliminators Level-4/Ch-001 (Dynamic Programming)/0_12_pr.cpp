// Correct.
// (See Line-64 to 68.)
// 
// (I solved it with the help of Claude-AI,
//   it gives me hint about using Iterative-DP,
//   as my initial code in Recursive-DP, which 
//   gives me TLE & is harder to code.)

// Coin Combinations I
// https://cses.fi/problemset/task/1635/






























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
    // int dp[x+10] = {-1};
    //  (Always use vectors to store dp-values, because
    //    arrays can give wrong O/P for Default-Values,
    //    which will give me overall wrong O/P.)
    dp[0] = 1;
    // Iterative DP
    for(int i=1; i <= x; i++){
        dp[i] = 0;
        for(int j=0; j < n; j++){
            if((i - c[j]) >= 0){
                dp[i] += dp[i - c[j]];
                dp[i] %= MOD;
            }
        }
    }

    // O/P
    int ans = dp[x];
    cout << ans << endl;
    // TC = O(n * x)
}