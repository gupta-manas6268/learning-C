// Correct.

// B. Archer
// https://codeforces.com/problemset/problem/312/B




































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
    int a, b, c, d; cin >> a >> b >> c >> d;

    // Solution
    long double A_B = (((long double)(a))/ ((long double)(b)));
    long double C_D = (((long double)(c))/ ((long double)(d)));

    long double deno = ((long double)(1) - ((((long double)(1) - A_B) * ((long double)(1) - C_D))));
    long double num = A_B;

    // O/P
    long double ans = (A_B/ deno);
    cout << setprecision(10) << fixed << ans << endl;
}