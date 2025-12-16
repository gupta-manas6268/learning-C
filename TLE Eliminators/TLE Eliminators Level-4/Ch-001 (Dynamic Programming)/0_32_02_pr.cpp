// Correct.
// (I saw Hint to solve this Question.)

// (I used Iterative-DP here, which works fine.)

// Array Description
// https://cses.fi/problemset/task/1746

































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
    int n, m; cin >> n >> m;
    vector<int> x(n);
    for(int i=0; i < n; i++){ cin >> x[i];}

    // Solution
    vector<vector<int>> dp(n+10, vector<int> (m+10, 0));
    for(int i=0; i < n; i++){
        if((i == 0) && (x[i] == 0)){
            for(int j=1; j <= m; j++){
                dp[i][j] = 1;
            }
        }
        else if(x[i] == 0){
            for(int j=1; j <= m; j++){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]);
                dp[i][j] %= MOD;
            }
        }
        else if(x[i] != 0){
            int temp = x[i];
            if(i == 0){ dp[i][temp] = 1;}
            else{
                dp[i][temp] = (dp[i-1][temp-1] + dp[i-1][temp] + dp[i-1][temp+1]);
                dp[i][temp] %= MOD;
            }
        }
    }
    
    int ans = 0;
    for(int j=1; j <= m; j++){
        ans += dp[n-1][j];
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
}