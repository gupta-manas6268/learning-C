// Correct.
// This is Mentor's code.

// E. Block Sequence
// https://codeforces.com/problemset/problem/1881/E



































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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}

        // Solution
        vector<int> dp(n);
        // dp[i] = max no. of elements we can pick from [i to 'n-1'] s.t.
        //        all the blocks are formed with elements from [i to 'n-1']

        // dp[i] = max(dp[i + 1], 1 + a[i] + dp[i + 1 + a[i]]).
        // dp[i + 1] = max(dp[i + 2], 1 + a[i + 1], dp[i + 1 + 1 + a[i + 1]]).

        for(int i = n-1; i >= 0; i--){
            // Start a block with the i'th element being the 1st element of the block.
            int pick_i_index = 0;
            if((i + a[i]) <= (n-1)){
                pick_i_index = 1 + a[i];
                if((i + 1 + a[i]) <= (n-1)){
                    pick_i_index += dp[i + 1 + a[i]];
                }
            }

            // skip
            int skip_i_index = 0;
            if((i + 1) <= (n - 1)){
                skip_i_index += dp[i + 1];
            }
            dp[i] = max(skip_i_index, pick_i_index);
        }
        
        // O/P
        int ans = (n - dp[0]);
        cout << ans << endl;
    }
}