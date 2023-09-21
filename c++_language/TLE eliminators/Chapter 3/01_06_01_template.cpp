// At time (15:00) of dr-1 of 'time complexity'.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

#ifndef ONLINE_JUDGE     
#include "algo/debug.h" 
#else
#define dbg(...);
#define debug(...);
#define crndl;
#endif

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("io/input.txt", "r", stdin);
    freopen("io/output.txt", "w", stdout);
    freopen("io/error.txt", "w", stderr);
    #endif
    
    int t = 1; cin>>t;

    for(int _t = 1; _t <= t; _t++){
        debug(Testcase, _t);
        solve();
        crndl;
    }
}