// Correct.
// (I Solved it with the help of Hint.)

// I - Coins
// https://atcoder.jp/contests/dp/tasks/dp_i



































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
    vector<long double> P(n);
    for(int i=0; i < n; i++){ cin >> P[i];}

    // Solution
    vector<vector<long double>> dp(n+10, vector<long double> (n+10, 0));
    dp[0][0] = 1; // Base Case: 0 tosses, 0 heads
    for(int i=1; i <= n; i++){ // 1-based indexing
        for(int j=0; j <= i; j++){
            if(j > 0){
                dp[i][j] += (dp[i-1][j-1] * P[i-1]); // Heads on i'th toss
            }
            dp[i][j] += (dp[i-1][j] * (1 - P[i-1])); // Tails on i'th toss
        }
    }
    
    long double ans = 0;
    for(int j = (n/2)+1; j <= n; j++){
        ans += dp[n][j];
    }

    // O/P
    cout <<fixed << setprecision(10) << ans << endl;
}   