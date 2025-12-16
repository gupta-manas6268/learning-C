// Correct.

// B. Orac and Models
// https://codeforces.com/problemset/problem/1350/B




































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
        vector<int> s(n);
        for(int i=0; i < n; i++){ cin >> s[i];}
        
        // Solution
        vector<int> dp(n+10, 1);
        for(int i = n-1; i >= 0; i--){
            int j = i+1;
            int k = 2*j;
            while(k <= n){
                if(s[j-1] < s[k-1]){
                    dp[j] = max(dp[j], 1 + dp[k]);
                }
                k += j;
            }
        }
        int ans = dp[1];
        for(int i=1; i <= n; i++){
            ans = max(ans, dp[i]);
        }

        // O/P
        cout << ans << endl;
    }
}