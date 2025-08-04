// Correct.

// Edit Distance
// https://cses.fi/problemset/task/1639




































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
    string a, b; cin >> a >> b;

    // Solution
    int n = a.length(), m = b.length();

    vector<vector<int>> dp(n + 1, vector<int> (m + 1, 1e6));
    // dp[i][j] = min. steps to match 1st i-characters of 
    //          1st-string with 1st j-characters of 2nd-string.

    // Base case
    for(int i=0; i <= n; i++){
        dp[i][0] = i;
    }
    for(int j=0; j <= m; j++){
        dp[0][j] = j;
    }

    // dp[i][j] = 1 + min(dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1])
    //               (Insertion ↑)     (↑ Deletion)    (↑ Replace)
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char x = a[i-1], y = b[j-1];

            // Transition
            if(x == y){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = dp[i-1][j-1] + 1;
            }

            // skip i'th character or add 1-character after j'th character.
            dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);

            // skip j'th character or add 1-character after i'th character.
            dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
        }
    }

    // O/P
    cout << dp[n][m] << endl;
}