//  
// This is Mentor's code


// D. Color with Occurrences
// https://codeforces.com/problemset/problem/1714/D



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
        string t; cin >> t;
        int n = sz(t);
        int m; cin >> m;
        vector<string> patterns(m);
        for(int i=0; i < m; i++){
            cin >> patterns[i];
        }

        // dp[i][k] = min. no. of operations to colors all the
        //      colors from (i to n-1) in red s.t. the first
        //      k-characters starting from (i) are already colored.

        vector<vector<int>> dp(n, vector<int> (n, 1e9));

        // dp[i][k] -> dp[i + 1][k - 1], dp[i + 1][max(k-1, len(s_j)-1)]
        // dp[i][anything] depends on dp[i + 1][something]

        for(int i = n-1; i >= 0; i--){
            for(int k=0; k < n; k++){
                // invalid state
                if(k > (n-i)){
                    dp[i][k] = 1e9;
                    continue;
                }

                // already reached ans
                if(k == (n-i)){
                    dp[i][k] = 0;
                    continue;
                }

                // don't put any string

                // standing at i = (n-1)
                //  what can happen
                //         last character is colored -> dp[n - 1][1]
                //         last character is not colored -> dp[n - 1][0]
                int skip = 1e9;
                if(k != 0){
                    skip = dp[i + 1][k - 1];
                }

                // put some string
                int pick = 1e9;
                for(int j=0; j < m; j++){
                    // we can only put the j'th string on top of 't' starting
                    //  from i'th character if substring from i'th character 
                    //  matches the j'th string completely.

                    bool can_Color = false;
                    int string_len = sz(patterns[j]);

                    if(((i + string_len) <= n) && (t.substr(i, string_len) == patterns[j])){
                        int colorings = 1 + dp[i + 1][max(k - 1, string_len - 1)];
                        pick = min(pick, colorings);
                    }
                }
                dp[i][k] = min(pick, skip);
            }
        }

        // O/P
        cout << dp[0][0] << endl;
        // no. of states = (n * n)
        // transition time per state => (m * worst_case length of a pattern)
        // 
        // TC = O(|No. of Patterns| * |Worst Case length of 1-pattern|)
    }
}