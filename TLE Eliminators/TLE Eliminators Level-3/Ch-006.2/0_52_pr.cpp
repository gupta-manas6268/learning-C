// Correct.
// (I used Chat-GPT when TLE occurs.)

// A. Little Pony and Expected Maximum
// codeforces.com/problemset/problem/453/A

























// I used here, 'powl' inbuilt-function, instead of
//  my own 'power' function. Because 'powl' is a 
//  optimized & vectorized function, which is much
//  faster than my 'power' function. So, from 
//  next-time use 'powl' function.



























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
    int m, n; cin >> m >> n;

    // Solution
    long double ans = 0.0;
    for(int k=1; k <= m; k++){
        long double K_M = (((long double)(k))/ ((long double)(m)));
        long double K1_M = (((long double)(k-1))/ ((long double)(m)));
        long double N = (long double)(n);
        ans += (long double)((((powl(K_M, N) - powl(K1_M, N))) * (long double)(k)));
    }

    // O/P
    cout << setprecision(10) << fixed << ans << endl;
}