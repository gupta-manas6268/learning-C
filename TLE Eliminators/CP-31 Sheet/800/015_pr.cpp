// Correct.

// A. Array Coloring
// https://codeforces.com/problemset/problem/1857/A

































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
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++){ 
            cin >> a[i];
            sum += a[i];
        }

        if(sum%2 == 0){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}