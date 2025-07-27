// 

// Coin Combinations II
// https://cses.fi/problemset/task/1636



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dp(1e6+10, -1);
void solve(vector<int>& candidates, int target, int index){
    dp[0] = 1;
    if(target == 0){ return;}
    for(int i = index; i < candidates.size(); i++){
        if(target >= candidates[i]){
            if(dp[target-candidates[i]] == -1){
                solve(candidates, target-candidates[i], i);
            }
            if(dp[target-candidates[i]] != -1){
                // cout << target << " " << candidates[i] << endl;
                if(dp[target] == -1){
                    dp[target] = dp[target-candidates[i]];
                }
                else{
                    dp[target] += dp[target-candidates[i]];
                }
                dp[target] %= MOD;
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, x; cin >> n >> x;
    vector<int> c(n);
    for(int i=0; i < n; i++){ cin >> c[i];}
    
    // Solution
    sort(c.begin(), c.end());
    solve(c, x, 0);
    
    // O/P
    int ans = dp[x];
    // for(int i=0; i <= x; i++){ cout << dp[i] << endl;}
    cout << ans << endl;
    // TC = O(n * x)
}