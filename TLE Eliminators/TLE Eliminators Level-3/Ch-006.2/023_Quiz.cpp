// Correct.

// Candy Lottery
// https://cses.fi/problemset/task/1727




































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
    int n, k; cin >> n >> k;

    // Solution
    long double ans = 0.0;
    for(int i=1; i <= k; i++){
        long double I_K = (((long double)(i))/ ((long double)(k)));
        long double I1_K = (((long double)(i-1))/ ((long double)(k)));
        long double N = (long double)(n);
        ans += (long double)((((powl(I_K, N) - powl(I1_K, N))) * (long double)(i)));
    }

    // O/P

    cout << setprecision(6) << fixed << ans << endl;
}