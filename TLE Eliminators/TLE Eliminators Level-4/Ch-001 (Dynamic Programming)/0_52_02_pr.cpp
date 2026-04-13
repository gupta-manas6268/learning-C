// Correct.
// (I Solved it with the help of Hint.)

// Rectangle Cutting
// https://cses.fi/problemset/task/1744



































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
    int a, b; cin >> a >> b;

    // Solution
    vector<vector<int>> dp(a+10, vector<int> (b+10, INT_MAX));
    for(int j=0; j <= b; j++){ dp[0][j] = 0;}
    for(int i=0; i <= a; i++){ dp[i][0] = 0;}
    for(int i=0; i <= min(a, b); i++){ dp[i][i] = 0;}

    for(int i=1; i <= a; i++){
        for(int j=1; j <= b; j++){
            // if(dp[j][i] != INT_MAX){ dp[i][j] = dp[j][i];} // (Error)
            // (Above line, Wrong because when (a != b), then
            //  may be dp[j][i] didn't exist in my 'dp' vector of vector.)

            for(int k=1; k <= (i/2); k++){
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);
            }
            for(int k=1; k <= (j/2); k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
            }
        }
    }

    // O/P 
    int ans = dp[a][b];
    cout << ans << endl;
    // TC = O(power(max(a, b), 3))
}