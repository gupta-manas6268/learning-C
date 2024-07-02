// Correct.

// A. Twin Permutations
// https://codeforces.com/problemset/problem/1831/A

































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
        int b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = (n + 1 - a[i]);
        }

        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}