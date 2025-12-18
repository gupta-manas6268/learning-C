// 

// B. Good Sequences
// https://codeforces.com/contest/264/problem/B



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
    int n; cin >> n;
    vector<int> a(n+5);
    for(int i=1; i <= n; i++){ cin >> a[i];}

    // Solution
    vector<int> dp(n+10, 0);
    for(int i=1; i <= n; i++){
        dp[i] = 1;
        
    }
}