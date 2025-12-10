// Correct.
// (This is My version of Mentor's code.)

// C. New Year and Permutation
// https://codeforces.com/problemset/problem/1284/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, MOD; cin >> n >> MOD;

    // Pre-computation of Factorial.
    vector<int> fact(n + 1);
    vector<int> inv_fact(n + 1); // inverse factorial
    fact[0] = 1;
    for(int i=1; i <= n; i++){ // O(n)
        fact[i] = (fact[i-1] * i) % MOD;
    }
    
    // Solution
    int ans = 0;
    for(int i=1; i <= n; i++){
        int val = (n-i+1) * fact[i];
        val %= MOD;
        val *= fact[n-i];
        val %= MOD;
        val *= (n-i+1);
        val %= MOD;

        ans += val;
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
}