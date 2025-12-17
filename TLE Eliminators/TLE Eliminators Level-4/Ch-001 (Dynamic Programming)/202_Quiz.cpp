// Correct.
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
        // I/P
        string t; cin >> t;
        int n = t.length();
        int m; cin >> m;
        vector<string> patterns(m);
        for(int i=0; i < m; i++){
            cin >> patterns[i];
        }

        // Solution

        // dp[i][k] = min. no. of operations to colors all the
        //      colors from (i to n-1) in red s.t. the first
        //      k-characters starting from (i) are already colored.

        vector<vector<int>> dp(n+1, vector<int> (n+1, 1e9));
        vector<vector<pair<int, pair<int,int>>>> Chose(n+1, vector<pair<int, pair<int,int>>> (n+1, {-2, {-1,-1}}));

        // dp[i][k] -> dp[i + 1][k - 1], dp[i + 1][max(k-1, len(s_j)-1)]
        // dp[i][anything] depends on dp[i + 1][something]

        for(int k=0; k <= n; k++){ dp[n][k] = 0;}

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
                    Chose[i][k] = {-2, {-1, -1}}; // Special marker for "done"
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
                int best_j = -1;
                for(int j=0; j < m; j++){
                    // we can only put the j'th string on top of 't' starting
                    //  from i'th character if substring from i'th character 
                    //  matches the j'th string completely.

                    int string_len = patterns[j].length();

                    if(((i + string_len) <= n) && (t.substr(i, string_len) == patterns[j])){
                        int colorings = 1 + dp[i + 1][max(k - 1, string_len - 1)];
                        // pick = min(pick, colorings)
                        if(colorings < pick){
                            pick = colorings;
                            best_j = j;
                        }
                    }
                }
                dp[i][k] = min(pick, skip);
                if((pick <= skip) && (best_j != -1)){
                    int string_len = patterns[best_j].length();
                    Chose[i][k] = {best_j, {i+1, max(k-1, string_len-1)}};
                }
                else if(k > 0){
                    Chose[i][k] = {-1, {i+1, k-1}};
                }
            }
        }

        // O/P
        if(dp[0][0] >= 1e9){
            cout << -1 << endl;
        }
        else{
            cout << dp[0][0] << endl;

            int i=0, k=0;
            vector<pair<int,int>> ans;
            while((i < n) && (Chose[i][k].first != -2)){
                if(Chose[i][k].first >= 0){
                    ans.push_back({Chose[i][k].first+1, i+1});
                }
                int new_I = Chose[i][k].second.first, new_K = Chose[i][k].second.second;
                i = new_I, k = new_K;
            }

            for(int i=0; i < ans.size(); i++){
                cout << ans[i].first << " " << ans[i].second << endl;
            }
        }
        // no. of states = (n * n)
        // transition time per state => (m * worst_case length of a pattern)
        // 
        // TC = O(|No. of States| * |Transition time per state|)
        // TC = O(power(n, 2) * m * L)  (L => Length of sub-string.)
    }
}