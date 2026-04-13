// Correct.
// (I Solved it myself. So, no need to Write in Register.)

// D. Flowers
// https://codeforces.com/problemset/problem/474/D



































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
    int tc, k; cin >> tc >> k;

    // Solution
    vector<vector<int>> dp(1e5+10, vector<int> (2+5, 0));
    dp[0][0] = 0, dp[0][1] = 1; // Base Case
    dp[1][0] = 1;
    if(k == 1){ dp[1][1] = 1;} 
    else{ dp[1][1] = 0;}

    for(int i=2; i <= 1e5+5; i++){
        // For (j = 0) Red
        dp[i][0] = (dp[i-1][0] + dp[i-1][1]); 
        dp[i][0] %= MOD;

        // For (j = 1) White
        if(i == k){ dp[i][1] = 1;}
        else if(i > k){
            dp[i][1] = (dp[i-k][0] + dp[i-k][1]);
            dp[i][1] %= MOD;
        }
        else{ dp[i][1] = 0;}
    }
    vector<int> Prefix_Sum(1e5+10);
    int temp_ans = 0;
    for(int i=1; i <= 1e5; i++){
        temp_ans += (dp[i][0] + dp[i][1]);
        temp_ans %= MOD;
        Prefix_Sum[i] = temp_ans;
    }

    while (tc--){
        // I/P
        int a, b; cin >> a >> b;

        // O/P
        int ans = (Prefix_Sum[b] - Prefix_Sum[a-1] + MOD) % MOD;
        cout << ans << endl;
        // TC = O(tc + b) = O(1e5)
        // SC = O(1e5)
    }
}