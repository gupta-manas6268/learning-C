// Correct.

// A. Multiplication Table
// https://codeforces.com/problemset/problem/577/A


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, x; cin >> n >> x;

    int ans = 0;
    for(int i=1; i<=(min(n, x)); i++){
        if(((x % i) == 0) && ((x / i) <= n)){
            ans++;
        }
    }
    cout << ans << endl;
}