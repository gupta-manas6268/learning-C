// 

// F - LCS
// https://atcoder.jp/contests/dp/tasks/dp_f



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
    string s, t; cin >> s >> t;

    // Solution
    int n = s.length(), m = t.length();
    vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
    for(int i=1; i <= n; i++){ // 1-based indexing
        for(int j=1; j <= m; j++){ // 1-based indexing
            if(s[i-1] == t[j-1]){
                dp[i][j] = (1 + dp[i-1][j-1]);
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int LCS_Length = dp[n][m];
    cout << LCS_Length << endl;

    int x = n, y = m;
    string ans = "";
    while((x > 0) && (y > 0)){
        // if((dp[x][y] > dp[x-1][y]) && (dp[x][y] > dp[x][y-1])){
        if(s[x-1] == t[y-1]){ // Both (↑)above & this line are Same.
            ans += s[x-1];
            x--; y--;
        }
        else if(dp[x-1][y] == dp[x][y]){ x--;}
        else if(dp[x][y-1] == dp[x][y]){ y--;}
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}