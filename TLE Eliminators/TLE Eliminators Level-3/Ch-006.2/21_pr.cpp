// Correct.

// D. Almost Identity Permutations
// https://codeforces.com/contest/888/problem/D




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e14 + 31;
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
    int ans = 1;
    if(k == 1){ ans = 1;}
    if(k >= 2){ 
        ans += ((n * (n-1))/ 2);
    }
    if(k >= 3){ 
        ans += (( ((n-2) * (n-1) * n) / 6) * 2);
    }
    if(k >= 4){
        ans += (( ((n-3) * (n-2) * (n-1) * n)/ 24) * 9);
    }

    // O/P
    cout << ans << endl;
}